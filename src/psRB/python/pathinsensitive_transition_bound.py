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

        self.reset_chains = defaultdict(list)

        self.all_vars = set([dc_set[0].get_var() for (_, dc_set, _, _) in self.transition_graph.transitions])

   
    def collect_var_modifications(self):
        for transition_index in range(len(self.transition_graph.transitions)):
            (_, dc_set, _, _) = self.transition_graph.transitions[transition_index]
            for dc in dc_set:
                if dc.dc_type == DifferenceConstraint.DCType.WHILE or dc.dc_type == DifferenceConstraint.DCType.IF: continue
                var = dc.get_var()
                if dc.dc_type == DifferenceConstraint.DCType.INC:
                    self.inc_transitions[var].append((transition_index, dc.dc_const))
                elif dc.dc_type == DifferenceConstraint.DCType.RESET:
                    self.reset_transitions[var].append((transition_index, dc.dc_var, dc.dc_const))
                elif dc.dc_type == DifferenceConstraint.DCType.DEC:
                    self.dec_transitions[var].append((transition_index, var, (dc.dc_const)) )

    # def build_reset_graph(self):
    #     edges = set()
    #     def dfs(v, visited, currrent_chain):
    #         for (transition_index, next_var, dc_const) in self.reset_transitions[v]:
    #             if not visited:
    #                 edges.add(next_var)
    #                 visited[next_var] = True
    #                 self.build_reset_graph(next_var, visited, currrent_chain + [next_var])
    #         return edges
    #     visited = {v: False for v in self.all_vars}
    #     for v in self.all_vars:
    #         dfs(v, visited, [v])
    #     self.reset_graph = DirectedGraph(len(self.all_vars), edges)

    def build_reset_graph(self):
        renaming_chains = []
        def dfs(v, visited, currrent_chain):
            for (transition_index, next_var, dc_const) in self.reset_transitions[v]:
                if not visited:
                    self.reset_graph[v].add(next_var)
                    visited[next_var] = True
                    self.var_reset_chains[v].append(self.build_reset_graph(next_var, visited, currrent_chain + [(transition_index, next_var, dc_const)]))
                else:
                    self.var_reset_chains[v].append(currrent_chain)
                    renaming_chains.append(currrent_chain)
            return currrent_chain

        visited = {v: False for v in self.all_vars}
        for v in self.all_vars:
            visited[v] = True
            dfs(v, visited, [])

        for chain in renaming_chains:
            self.rename_vars(chain)

    def rename_vars(self, vars):
        pass


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
        return

    
    # Input: a variable
    # computes the symbolic invariant for this variable over the whole program
    # Save this result into the global storage : self.var_invariant
    # to avoid re-computation
    def compute_var_invariant_subroutine(self, v, visited):
        var_inc = "0"
        var_reset = "0"
        for (t, dc_const) in self.inc_transitions[v]:
            if self.transition_bounds[t] == "":
                self.transition_bounds[t] = "∞" if visited[v] else self.compute_transition_bound_closure_subroutine(t, visited)
            var_inc += " + " + self.transition_bounds[t] + " * " + dc_const
        for (t, dc_var, dc_const) in self.reset_transitions[v]:
            if dc_var and self.var_invariant[dc_var] == "":
                if visited[dc_var]:
                    self.var_invariant[dc_var] = "∞"
                else:
                    visited[dc_var] = True
                    self.compute_var_invariant_subroutine(dc_var, visited)
            var_reset = "max(" + var_reset + ", " + (self.var_invariant[dc_var] if dc_var else "0") + " + " + dc_const + ")"

        self.inc_transitions_bound[v] = var_inc
        self.var_invariant[v] = var_inc + " + " + var_reset

    def compute_transition_bound_closure_subroutine(self, t_index, visited):
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
            return "∞"
        else:
            if v not in self.var_invariant.keys():
                visited[v] = True
                self.compute_var_invariant_subroutine(v, visited)
            tb_temp = self.inc_transitions_bound[v]
            for (reset_t, dc_var, dc_const) in self.reset_transitions[v]:
                if self.transition_bounds[reset_t] == "":
                    self.compute_transition_bound_closure_subroutine(reset_t, visited)
                if not dc_var:
                    tb_temp = "∞" if self.transition_bounds[reset_t] == "∞" else tb_temp + " + " + self.transition_bounds[reset_t] + " * "  + dc_const              
                else:
                    if dc_var not in self.var_invariant.keys():
                        # if visited[dc_var]:
                        #     self.var_invariant[dc_var] = "∞"
                        # else:
                            visited[dc_var] = True
                            self.compute_var_invariant_subroutine(dc_var, visited)
                    tb_temp = "∞" if self.transition_bounds[reset_t] == "∞" else tb_temp + " * (" +  self.var_invariant[dc_var] + " + " + dc_const + ")"              
            self.transition_bounds[t_index] = str(int(tb_temp)/int(c)) if isinstance(c, int) and isinstance(tb_temp, int)else  (tb_temp + "/" + c)

    ###TODO: Non-termination when the variable is reset or increased in side the loop where it is a local bound"
    def compute_var_invariant(self, v, visited):
        var_inc = "0"
        var_reset = "0"
        for (t, dc_const) in self.inc_transitions[v]:
            if self.transition_bounds[t] == "":
                self.transition_bounds[t] = "∞" if visited[v] else self.compute_transition_bound_closure(t, visited)
            var_inc = "∞" if self.transition_bounds[t] == "∞" else var_inc + " + " + self.transition_bounds[t] + " * " + dc_const
        for (t, dc_var, dc_const) in self.reset_transitions[v]:
            if dc_var and self.var_invariant[dc_var] == "":
                if visited[dc_var]:
                    self.var_invariant[dc_var] = "∞"
                else:
                    visited[dc_var] = True
                    self.compute_var_invariant(dc_var, visited)
            var_reset = "∞" if self.var_invariant[dc_var] == "∞" else "max(" + var_reset + ", " + (self.var_invariant[dc_var] if dc_var else "0") + " + " + dc_const + ")"
        self.inc_transitions_bound[v] = var_inc
        self.var_invariant[v] = var_inc + " + " + var_reset


    def compute_transition_bound_closure(self, t_index, visited):
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
            return "∞"
        else:
            if v not in self.var_invariant.keys():
                visited[v] = True
                self.compute_var_invariant(v, visited)
            tb_temp = self.inc_transitions_bound[v] + "+" + "+".join([self.inc_transitions_bound[v] for v in self.reset_vars[v]]) if self.reset_vars[v] else self.inc_transitions_bound[v]
            for reset_chain in self.var_reset_chains[v]:
                min_transition = ""
                chain_in = ""
                chain_const = ""
                for (reset_t, dc_var, dc_const) in reset_chain:
                    if self.transition_bounds[reset_t] == "":
                        self.compute_transition_bound_closure(reset_t, visited)
                    min_transition = "∞" if self.transition_bounds[reset_t] == "∞" else self.transition_bounds[reset_t] if min_transition == "" else  "min( " + self.transition_bounds[reset_t] + ", " + min_transition + ")"
                    if dc_var: 
                        if dc_var not in self.var_invariant.keys():
                            visited[dc_var] = True
                            self.compute_var_invariant(dc_var, visited)
                        
                    chain_const = dc_const if chain_const == "" else chain_const + " + " + dc_const
                tb_temp = "∞" if min_transition == "∞" else tb_temp + " + " + min_transition + " * (" +  chain_const + ")" if chain_in == "" else " + " + min_transition + " * (" +  chain_in + " + " + chain_const + ")"
            self.transition_bounds[t_index] = str(int(tb_temp)/int(c)) if isinstance(c, int) and isinstance(tb_temp, int)else  (tb_temp + "/" + c)
        return self.transition_bounds[t_index]


    def compute_transition_bounds(self):
        self.collect_var_modifications()
        # for v in self.reset_transitions.keys():
        #     if v not in self.var_reset_chains.keys():
        #        self.dfs_var_inc_and_reset_chains(v)
        self.build_reset_graph()
        visited = {v: False for v in self.all_vars}
        for transition_index in reversed(range(len(self.transition_graph.transitions))):
            self.compute_transition_bound_closure(transition_index, visited)
        self.print_variable_bounds()
        return self.transition_bounds

    def print_transition_bounds(self):
            for (t_index, b) in enumerate(self.transition_bounds):
                (l1, _, l2, _) = self.transition_graph.transitions[t_index]
                print( "Path-insensitive RB for Transition: {}->{} is {} ".format(l1, l2, b))

    def print_variable_bounds(self):
        for v, b in self.var_invariant.items():
            print("Bounds For The Max Value of Variable {} is {}:".format(v, b))