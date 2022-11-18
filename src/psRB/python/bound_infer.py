from collections import defaultdict
from abstract_transition_graph import TransitionGraph, DifferenceConstraint, DirectedGraph
class LocalBound:
    transition_local_bounds = {}
    #
    def __init__(self, transition_graph = TransitionGraph()):
        self.transition_graph = transition_graph
    
    @staticmethod
    def compute_local_bounds(transition_graph):
        transition_local_bounds = [("-1", 1)]*len(transition_graph.transitions)
        for index, (_, dc_set, _, _) in enumerate((transition_graph.transitions)):
            if not transition_graph.is_in_scc(transition_graph.edges[index]):
                transition_local_bounds[index] = ("1", 1)
            else:
                for dc in dc_set:
                    if dc.is_dec():
                        transition_local_bounds[index] = (dc.get_var(), (dc.dc_const))                
        
        for index, (local_bound, lb_c) in enumerate(transition_local_bounds):
            if local_bound == "-1":
                for i_other, (lb_other, lb_c_other) in enumerate(transition_local_bounds):
                    if lb_other != "-1" and (not DirectedGraph(transition_graph.vertices_num, transition_graph.edges[:i_other]+transition_graph.edges[i_other+1:]).is_in_scc(transition_graph.edges[index])):
                        transition_local_bounds[index] = (lb_other, lb_c_other)
                        continue
        return transition_local_bounds






class TransitionBound:
    transition_bounds = []
    var_invariant = {}
    transition_local_bounds = []
    
    def __init__(self, transition_graph = TransitionGraph()) -> None:
        self.transition_graph = transition_graph
        self.transition_bounds = [""]*len(transition_graph.transitions)
        self.transition_local_bounds = LocalBound.compute_local_bounds(transition_graph)
        print("THE LOCAL BOUNDS ARE: ", self.transition_local_bounds)
        # for t,lb in enumerate(self.transition_local_bounds):
            # print(self.transition_graph.transitions[t], "has local bound", lb)
        self.var_invariant = defaultdict(str)
        ############# The Transitions where Each Variable is Reset
        self.inc_transitions = defaultdict(list)
        self.inc_transitions_bound = defaultdict(str)

        ############# The Transitions where Each Variable is Decreased
        self.dec_transitions = defaultdict(list)

        ############# The Transitions where Each Variable is Reset
        self.reset_transitions = defaultdict(list)

        ############# The Variables that Each Variable Is Nested Reset
        self.reset_vars = defaultdict(set)
        self.var_reset_chains = defaultdict(list)


        

   
    def collect_var_modifications(self):
        for transition_index in range(len(self.transition_graph.transitions)):
            (_, dc_set, _, _) = self.transition_graph.transitions[transition_index]
            # (_, dc_set, _, _) = t
            for dc in dc_set:
                if dc.dc_type == DifferenceConstraint.DCType.WHILE or dc.dc_type == DifferenceConstraint.DCType.IF: continue
                var = dc.get_var()
                if dc.dc_type == DifferenceConstraint.DCType.INC:
                    self.inc_transitions[var].append((transition_index, dc.dc_const))
                elif dc.dc_type == DifferenceConstraint.DCType.RESET:
                    self.reset_transitions[var].append((transition_index, dc.dc_var, dc.dc_const))
                elif dc.dc_type == DifferenceConstraint.DCType.DEC:
                    self.dec_transitions[var].append((transition_index, var, (dc.dc_const)) )

    def dfs_var_inc_and_reset_chains(self, v):
        for (transition_index, dc_var, dc_const) in self.reset_transitions[v]:
            if dc_var and (dc_var not in self.reset_vars[v]) and (not (dc_var == v)):
                self.reset_vars[v].add(dc_var)
                if (not self.var_reset_chains[dc_var]):
                    self.dfs_var_inc_and_reset_chains(dc_var)
                for dc_var_rchain in self.var_reset_chains[dc_var]:
                    self.var_reset_chains[v].append(list(filter(lambda x: (x[0] != transition_index and x[1] != v), dc_var_rchain))+[(transition_index, dc_var, dc_const)])
                for rv in self.reset_vars[dc_var]:
                    self.reset_vars[v].add(rv)
            else:
                self.var_reset_chains[v].append([(transition_index, dc_var, dc_const)])
        # self.var_reset_chains[v]=(reset_chains)
        
        return
    # def compute_var_reset(self):
    #     self.reset_transitions = {}
    
    # Input: a variable
    # computes the symbolic invariant for this variable over the whole program
    # Save this result into the global storage : self.var_invariant
    # to avoid re-computation
    def compute_var_invariant(self, v):
        var_inc = "0"
        var_reset = "0"
        # print(v, self.reset_transitions[v], self.inc_transitions[v])
        for (t, dc_const) in self.inc_transitions[v]:
            if self.transition_bounds[t] == "":
                self.compute_transition_bound_closure(t)
            var_inc += " + " + self.transition_bounds[t] + " * " + dc_const
        for (t, dc_var, dc_const) in self.reset_transitions[v]:
            if dc_var and self.var_invariant[dc_var] == "":
                self.compute_var_invariant(dc_var)
            var_reset = "max(" + var_reset + ", " + (self.var_invariant[dc_var] if dc_var else "0") + " + " + dc_const + ")"

        self.inc_transitions_bound[v] = var_inc
        self.var_invariant[v] = var_inc + " + " + var_reset

    ###TODO: Non-termination when the variable is reset or increased in side the loop where it is a local bound"
    def compute_var_invariant_optimal(self, v):
        var_inc = "0"
        var_reset = "0"
        # print(v, self.reset_transitions[v], self.inc_transitions[v])
        for (t, dc_const) in self.inc_transitions[v]:
            if self.transition_bounds[t] == "":
                self.compute_transition_bound_closure_optimal(t)
            var_inc += " + " + self.transition_bounds[t] + " * " + dc_const
        for (t, dc_var, dc_const) in self.reset_transitions[v]:
            if dc_var and self.var_invariant[dc_var] == "":
                self.compute_var_invariant_optimal(dc_var)
            var_reset = "max(" + var_reset + ", " + (self.var_invariant[dc_var] if dc_var else "0") + " + " + dc_const + ")"

        self.inc_transitions_bound[v] = var_inc
        self.var_invariant[v] = var_inc + " + " + var_reset


    def compute_transition_bound_closure_optimal(self, t_index):
        if not self.transition_bounds[t_index] == "":
            return self.transition_bounds[t_index]
        (v,c) = self.transition_local_bounds[t_index]
        if v == "1":
            self.transition_bounds[t_index] = "1"
            return "1"
        if v == "Q":
            self.transition_bounds[t_index] = "max(DB)"
            return "1"
        if v == "-1":
            self.transition_bounds[t_index] = "INF"
            return "INF"
        else:
            if v not in self.var_invariant.keys():
                self.compute_var_invariant_optimal(v)
            tb_temp = self.inc_transitions_bound[v] + "+" + "+".join([self.inc_transitions_bound[v] for v in self.reset_vars[v]]) if self.reset_vars[v] else self.inc_transitions_bound[v]
            for reset_chain in self.var_reset_chains[v]:
                min_transition = ""
                chain_in = ""
                chain_const = ""
                for (reset_t, dc_var, dc_const) in reset_chain:
                    if self.transition_bounds[reset_t] == "":
                        self.compute_transition_bound_closure_optimal(reset_t)
                    min_transition = self.transition_bounds[reset_t] if min_transition == "" else  "min( " + self.transition_bounds[reset_t] + ", " + min_transition + ")"
                    if dc_var: 
                        if dc_var not in self.var_invariant.keys():
                            self.compute_var_invariant(dc_var)
                        # if (chain_in == ""):
                        #     chain_in = self.var_invariant[dc_var]
                    chain_const = dc_const if chain_const == "" else chain_const + " + " + dc_const
                tb_temp += " + " + min_transition + " * (" +  chain_const + ")" if chain_in == "" else " + " + min_transition + " * (" +  chain_in + " + " + chain_const + ")"
            self.transition_bounds[t_index] = str(int(tb_temp)/int(c)) if isinstance(c, int) and isinstance(tb_temp, int)else  (tb_temp + "/" + c)
        return self.transition_bounds[t_index]


    def compute_transition_bound_closure(self, t_index):
        if not self.transition_bounds[t_index] == "":
            return self.transition_bounds[t_index]
        (v,c) = self.transition_local_bounds[t_index]
        if v == "1":
            self.transition_bounds[t_index] = "1"
            return "1"
        if v == "Q":
            self.transition_bounds[t_index] = "max(DB)"
            return "1"
        if v == "-1":
            self.transition_bounds[t_index] = "INF"
            return "INF"
        else:
            if v not in self.var_invariant.keys():
                self.compute_var_invariant(v)
            tb_temp = self.inc_transitions_bound[v]
            for (reset_t, dc_var, dc_const) in self.reset_transitions[v]:
                if self.transition_bounds[reset_t] == "":
                    self.compute_transition_bound_closure(reset_t)
                if not dc_var:
                    tb_temp += " + " + self.transition_bounds[reset_t] + " * "  + dc_const              
                else:
                    if dc_var not in self.var_invariant.keys():
                        self.compute_var_invariant(dc_var)
                    tb_temp += " + " + self.transition_bounds[reset_t] + " * (" +  self.var_invariant[dc_var] + " + " + dc_const + ")"              
            self.transition_bounds[t_index] = str(int(tb_temp)/int(c)) if isinstance(c, int) and isinstance(tb_temp, int)else  (tb_temp + "/" + c)


    def compute_transition_bounds(self):
        self.collect_var_modifications()
        # visited = {v:False for v in self.reset_transitions.keys()}
        for v in self.reset_transitions.keys():
            if v not in self.var_reset_chains.keys():
               self.dfs_var_inc_and_reset_chains(v)
        for transition_index in reversed(range(len(self.transition_graph.transitions))):
            self.compute_transition_bound_closure_optimal(transition_index)
        return self.transition_bounds

    def print_transition_bounds(self):
            for (t_index, b) in enumerate(self.transition_bounds):
                (l1, dc_set, l2, vars) = self.transition_graph.transitions[t_index]
                for var_vertex in vars:
                    print( "Reachability Bound for Transition: (" + str(l1) + ", " + str(l2) + ") is: " + str(b))
                    for dc in dc_set:
                        if not (dc.dc_type == DifferenceConstraint.DCType.ASUM) :
                            print( "weight for Variable: " + dc.get_var() + " of label " + str(var_vertex) + " is: " + str(b))
