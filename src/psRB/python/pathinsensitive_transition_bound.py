from collections import defaultdict
from abstract_transition_graph import TransitionGraph, DifferenceConstraint, DirectedGraph
import copy






class TransitionBound:
    
    def __init__(self, transition_graph = None) -> None:
        self.transition_graph = transition_graph if transition_graph else TransitionGraph()
        self.transition_bounds = [""]*(transition_graph.transition_num)
        self.transition_local_bounds = [("-1", 0)]*(transition_graph.transition_num)
        print("THE LOCAL BOUNDS ARE: ", self.transition_local_bounds)


        ############# The Transitions where Each Variable is Reset
        self.inc_transitions = defaultdict(list)
        self.inc_transitions_bound = defaultdict(str)

        ############# The Transitions where Each Variable is Decreased
        self.dec_transitions = defaultdict(list)

        ############# The Transitions where Each Variable is Reset
        self.reset_transitions = defaultdict(list)

        ############# The Variables that Each Variable Is Nested Reset
        self.var_reset_chains = defaultdict(list)

        self.all_vars = set([dc_set[0].get_var() for (_, dc_set, _, _) in self.transition_graph.transitions])
        self.var_invariant = {v : "" for v in self.all_vars}


    def compute_local_bounds(self, transition_graph, transition_paths):
        def on_same_transition_path(e1, e2):
            for path in transition_paths:
                if e1[0] in path and e1[1] in path and e2[0] in path and e2[1] in path:
                    return True
            return False
        for index, (l1, dc_set, l2, _) in enumerate((transition_graph.transitions)):
            if not transition_graph.in_scc((l1, l2)):
                self.transition_local_bounds[index] = ("1", 1)
            else:
                for dc in dc_set:
                    if dc.is_dec():
                        self.transition_local_bounds[index] = (dc.get_var(), (dc.dc_const))                
        
        # while True:
        #     woking = copy.deepcopy(self.transition_local_bounds)
        for index, (local_bound, lb_c) in enumerate(self.transition_local_bounds):
            if local_bound == "-1":
                (l1, dc, l2, _ ) = transition_graph.transitions[index]
                for i_other, (lb_other, lb_c_other) in enumerate(self.transition_local_bounds):
                    if i_other == index or (not (self.transition_local_bounds[index][0] == "-1")) or lb_other == "-1":
                        continue
                    new_edges = transition_graph.edges[:i_other]+transition_graph.edges[i_other+1:]
                    # print("Computing the Local Bound For transition {} and Remove the Edge {}, and Removed Edges are: {}".format(transition_graph.transitions[index], transition_graph.edges[i_other], new_edges))
                    newgraph = DirectedGraph(transition_graph.vertices_num, new_edges)
                    # print("THE SCC OF THE NEW GRAPH: {} and The COMPUTING EDGE IS {}".format(newgraph.scc_ids, transition_graph.edges[index]))
                    if (not newgraph.in_scc((l1, l2))):
                        self.transition_local_bounds[index] = (lb_other, lb_c_other)
                    elif (transition_graph.transitions[index][0] == transition_graph.transitions[i_other][0] and dc[0].dc_type != DifferenceConstraint.DCType.WHILE):
                        self.transition_local_bounds[index] = (lb_other, lb_c_other)
            # if woking == self.transition_local_bounds:
            #     break
        
        for index, (local_bound, lb_c) in enumerate(self.transition_local_bounds):
            if local_bound == "-1":
                (l1, dc, l2, _ ) = transition_graph.transitions[index]
                for i_other, (lb_other, lb_c_other) in enumerate(self.transition_local_bounds):
                    if i_other == index or (not (self.transition_local_bounds[index][0] == "-1")) or lb_other == "-1" or lb_other == "1":
                        continue
                    if (on_same_transition_path(transition_graph.edges[index], transition_graph.edges[i_other])):
                        self.transition_local_bounds[index] = (lb_other, lb_c_other)

        return self.transition_local_bounds

######################################################################## The Basic Computation Collecting Variable Modification Sets ########################################################################

    def collect_var_modifications(self):
        for transition_index in range((self.transition_graph.transition_num)):
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

    
######################################################################## The Subroutine Computation Through Basic Variable Modification Sets ########################################################################

    # Input: a variable
    # computes the symbolic invariant for this variable over the whole program
    # Save this result into the global storage : self.var_invariant
    # to avoid re-computation
    # def compute_var_invariant_subroutine(self, v, visited):
    #     var_inc = "0"
    #     var_reset = "0"
    #     for (t, dc_const) in self.inc_transitions[v]:
    #         if (not self.transition_bounds[t]):
    #             self.transition_bounds[t] = "∞" if visited[v] else self.compute_transition_bound_closure_subroutine(t, visited)
    #         var_inc += " + " + self.transition_bounds[t] + " * " + dc_const
    #     for (t, dc_var, dc_const) in self.reset_transitions[v]:
    #         if dc_var and (not self.var_invariant[dc_var]):
    #             if visited[dc_var]:
    #                 self.var_invariant[dc_var] = "∞"
    #             else:
    #                 visited[dc_var] = True
    #                 self.compute_var_invariant_subroutine(dc_var, visited)
    #         var_reset = "max(" + var_reset + ", " + (self.var_invariant[dc_var] if dc_var else "0") + " + " + dc_const + ")"

    #     self.inc_transitions_bound[v] = var_inc
    #     self.var_invariant[v] = var_inc + " + " + var_reset

    # def compute_transition_bound_closure_subroutine(self, t_index, visited):
    #     if self.transition_bounds[t_index]:
    #         return self.transition_bounds[t_index]
    #     (v,c) = self.transition_local_bounds[t_index]
    #     if v == "1":
    #         self.transition_bounds[t_index] = "1"
    #         return "1"
    #     if v == "Q":
    #         self.transition_bounds[t_index] = "max(DB)"
    #         return "1"
    #     if v == "-1":
    #         self.transition_bounds[t_index] = "INF"
    #         return "∞"
    #     else:
    #         if v not in self.var_invariant.keys():
    #             visited[v] = True
    #             self.compute_var_invariant_subroutine(v, visited)
    #         tb_temp = self.inc_transitions_bound[v]
    #         for (reset_t, dc_var, dc_const) in self.reset_transitions[v]:
    #             if not self.transition_bounds[reset_t]:
    #                 self.compute_transition_bound_closure_subroutine(reset_t, visited)
    #             if not dc_var:
    #                 tb_temp = "∞" if self.transition_bounds[reset_t] == "∞" else tb_temp + " + " + self.transition_bounds[reset_t] + " * "  + dc_const              
    #             else:
    #                 if dc_var not in self.var_invariant.keys():
    #                         visited[dc_var] = True
    #                         self.compute_var_invariant_subroutine(dc_var, visited)
    #                 tb_temp = "∞" if self.transition_bounds[reset_t] == "∞" else tb_temp + " * (" +  self.var_invariant[dc_var] + " + " + dc_const + ")"              
    #         self.transition_bounds[t_index] = str(int(tb_temp)/int(c)) if isinstance(c, int) and isinstance(tb_temp, int)else  (tb_temp + "/" + c)


######################################################################## The Optimized Computation Through Variable-Reset-Graph ########################################################################

    def build_reset_graph(self):
        def dfs(v, visited, currrent_chain):
            chains = []
            for (transition_index, next_var, dc_const) in self.reset_transitions[v]:
                if next_var and not visited[transition_index]:
                    visited[transition_index] = True
                    chains = chains + (dfs(next_var, visited, [(transition_index, next_var, dc_const)] + currrent_chain))
                elif next_var and visited[transition_index]:
                    chains.append(copy.deepcopy(currrent_chain))
                elif not next_var:
                    chains.append([(transition_index, next_var, dc_const)] + currrent_chain)
            return chains
        for v in self.all_vars:
            visited = [False] * self.transition_graph.transition_num
            self.var_reset_chains[v] = dfs(v, visited, [])

    #TODO: add the variable renaming feature if detected the LOOP in variable reset.
    def rename_vars(self, vars):
        pass


    def collect_reset_chains(self, v):
        for (transition_index, dc_var, dc_const) in self.reset_transitions[v]:
            if dc_var and (dc_var not in self.reset_vars[v]) and (not (dc_var == v)):
                self.reset_vars[v].add(dc_var)
                if (not self.var_reset_chains[dc_var]):
                    self.collect_reset_chains(dc_var)
                for dc_var_rchain in self.var_reset_chains[dc_var]:
                    self.var_reset_chains[v].append(list(filter(lambda x: (x[0] != transition_index and x[1] != v), dc_var_rchain))+[(transition_index, dc_var, dc_const)])
                for rv in self.reset_vars[dc_var]:
                    self.reset_vars[v].add(rv)
            else:
                self.var_reset_chains[v].append([(transition_index, dc_var, dc_const)])
        return


######################################################################## The Optimized Computation for The Variable Max Value Bound ########################################################################

    def compute_var_invariant(self, v, visited):
        var_reset = []
        var_inc = []
        
        '''
        ### Compute the Total Increse Value
        '''
        for (t, dc_const) in self.inc_transitions[v]:
            if not self.transition_bounds[t]:
                self.compute_transition_bound_closure(t, visited)
            if self.transition_bounds[t] == "∞":
                self.inc_transitions_bound[v] = "∞" 
                continue
            else:
                var_inc.append("({})*({})".format(self.transition_bounds[t],dc_const))
        print("variable Incs", v, var_inc)
        self.inc_transitions_bound[v] = "0" if not var_inc else "+".join(var_inc)
        
        '''
        ### Compute the Max Reset Value
        '''
        for (_, reset_var, reset_const) in self.reset_transitions[v]:
             
            if reset_var and (not self.var_invariant[reset_var]) and (not visited[reset_var]):
                visited[reset_var] = True
                self.compute_var_invariant(reset_var, visited)
                self.var_invariant[v] = "∞" if self.var_invariant[reset_var] == "∞" else ""
            elif reset_var and (not self.var_invariant[reset_var]) and visited[reset_var]:
                self.var_invariant[v], self.var_invariant[reset_var], self.inc_transitions_bound[v] = "∞", "∞", "∞"
                return
            if not (self.var_invariant[v] == "∞"):
                var_reset.append("({})+({})".format(self.var_invariant[reset_var], reset_const))
        
        self.var_invariant[v] = "∞" if self.var_invariant[v] == "∞" else "({})+({})".format(self.inc_transitions_bound[v],"max{{{}}}".format(",".join(var_reset)))


    def compute_transition_bound_closure(self, t_index, visited):
        if self.transition_bounds[t_index]:
            return self.transition_bounds[t_index]
        (v,c) = self.transition_local_bounds[t_index]
        if v == "1":
            self.transition_bounds[t_index] = "1"
            return "1"
        if v == "-1":
            self.transition_bounds[t_index] = "INF"
            return "∞"
        else:
            '''
            Compute the Variable Max Value Bound, together with the total Increased Amount, 
            
            If it is not yet computed: Recusive Call
            Else: Terminate if there is a Loop Detected
            '''
            incs = []
            vars = [v]
            for (_, rv, _) in self.reset_transitions[v]:
                if rv:
                    vars.append(rv)
            for u in vars:
                if (not self.var_invariant[u]) and (not visited[u]):
                    visited[u] = True
                    self.compute_var_invariant(u, visited)
                elif (not self.var_invariant[u]) and visited[u]:
                    self.transition_bounds[t_index], self.var_invariant[u] = "∞", "∞"
                    return "∞"  
                incs.append(self.inc_transitions_bound[u])    
            self.transition_bounds[t_index] = "+".join(incs)
            
            
            '''
            Compute the Max Value Reset to The Local Bound
            '''
            for reset_chain in self.var_reset_chains[v]:
                min_transition, chain_in, chain_const = "", "", ""
                for (reset_t, reset_var, reset_const) in (reset_chain):
                    if not self.transition_bounds[reset_t]:
                        self.compute_transition_bound_closure(reset_t, visited) 
                    '''
                    Set the Bound to Infinity if detected an infinite bound, resulted by a previous Recusive Call
                    '''
                    if self.transition_bounds[reset_t] == "∞":
                        self.transition_bounds[t_index] = "∞"
                        return "∞"
                        
                    '''
                    Cannot terminate because we need to update the bounds for reset transition and reset varaibles on the other chains.
                    Otherwise, computing the bound for the other transitions in the other chains still cause non-termination
                    '''
                    # return "∞"
                    min_transition = self.transition_bounds[reset_t] if ((not min_transition) or (self.transition_bounds[reset_t] == "∞")) else  "min{{{},{}}}".format(self.transition_bounds[reset_t], min_transition)
                    

                    '''
                    Set the Bound to Infinity if detected an infinite bound, resulted by a previous Recusive Call
                    '''
                    if reset_var: 
                        if (not self.var_invariant[v]) and (not visited[reset_var]):
                            visited[reset_var] = True
                            self.compute_var_invariant(reset_var, visited)
                        elif (not self.var_invariant[reset_var]) and visited[reset_var]:
                            self.transition_bounds[reset_t], self.var_invariant[reset_var], self.inc_transitions_bound[reset_var] = "∞", "∞", "∞"
                            self.transition_bounds[t_index] = "∞"
                    
                    if not chain_in:
                        chain_const = reset_const
                        chain_in = self.var_invariant[reset_var] if reset_var else "0"
                    else:
                        chain_const += "+" + reset_const

                if not (self.transition_bounds[t_index] ==  "∞"):
                    bound_through_one_chain = "∞" if (min_transition == "∞" or  chain_in == "∞") else "({})*({}+{})".format(min_transition, chain_in, chain_const)
                    self.transition_bounds[t_index] =  "∞" if bound_through_one_chain == "∞" else (self.transition_bounds[t_index] + "+" + bound_through_one_chain)
                
            self.transition_bounds[t_index] = self.transition_bounds[t_index] if c == "1" else "{}/{}".format(self.transition_bounds[t_index], c)
        
        return self.transition_bounds[t_index]


######################################################################## Computation Intereface ########################################################################


    def compute_transition_bounds(self, transition_paths):
        self.compute_local_bounds(self.transition_graph, transition_paths)
        self.collect_var_modifications()
        self.build_reset_graph()
        self.print_reset_chains()
        visited = {v: False for v in self.all_vars}
        for transition_index in (range(self.transition_graph.transition_num)):
            if not self.transition_bounds[transition_index]:
                self.compute_transition_bound_closure(transition_index, visited)
        self.print_variable_bounds()
        return self.transition_bounds




######################################################################## Pretty Print Intereface ########################################################################

    def print_transition_bounds(self):
            for (t_index, b) in enumerate(self.transition_bounds):
                (l1, _, l2, _) = self.transition_graph.transitions[t_index]
                print( "Path-insensitive RB for Transition: {}->{} is {} ".format(l1, l2, b))

    def print_variable_bounds(self):
        for v, b in self.var_invariant.items():
            print("Bounds For The Max Value of Variable {} is {}:".format(v, b))
    
    def print_reset_chains(self):
        for v, chains in self.var_reset_chains.items():
            print("The Reset Chains of Variable {} are {}".format(v, chains))