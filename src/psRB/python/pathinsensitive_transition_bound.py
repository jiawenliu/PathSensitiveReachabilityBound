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
        self.reset_graph = defaultdict(list)

        self.reset_chains = defaultdict(list)

        self.all_vars = set([dc_set[0].get_var() for (_, dc_set, _, _) in self.transition_graph.transitions])
        self.var_invariant = {v : "" for v in self.all_vars}

   
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
        def dfs(v, visited, currrent_chain, collected_chains):
            for (transition_index, next_var, dc_const) in self.reset_transitions[v]:
                if next_var and not visited[next_var]:
                    self.reset_graph[v].append(next_var)
                    visited[next_var] = True
                    chain = dfs(next_var, visited, currrent_chain + [(transition_index, next_var, dc_const)], collected_chains) + []
                    collected_chains.append(sorted(chain, key=lambda reset: reset[0], reverse=True))
                elif next_var and visited[next_var]:
                    collected_chains.append(sorted(currrent_chain + [], key=lambda reset: reset[0], reverse=True))
                # elif not next_var:
                #     collected_chains.append(sorted(currrent_chain + [(transition_index, next_var, dc_const)], key=lambda reset: reset[0], reverse=True))
                    # renaming_chains.append(currrent_chain + [(transition_index, next_var, dc_const)])
            return currrent_chain
        for v in self.all_vars:
            collect_reset_chains = []
            dfs(v, {u: True if u == v else False for u in self.all_vars}, [], collect_reset_chains)
            if not self.var_reset_chains[v]:
                self.dfs_var_inc_and_reset_chains(v)
            # self.var_reset_chains[v] = collect_reset_chains
        for chain in renaming_chains:
            self.rename_vars(chain)
        
        # def collect_reset_chains(v, visited, currrent_chain):
        #     for next_v in self.reset_graph[v]:


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

    def compute_var_increase(self, v, visited):
        pass

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
        self.inc_transitions_bound[v] = "0" if not var_inc else "+".join(var_inc)
        
        '''
        ### Compute the Max Reset Value
        '''
        for (_, reset_var, reset_const) in self.reset_transitions[v]:
             
            if reset_var and (not self.var_invariant[reset_var]) and (not visited[reset_var]):
                visited[reset_var] = True
                self.compute_var_invariant(reset_var, visited)
            elif reset_var and (not self.var_invariant[reset_var]) and visited[reset_var]:
                self.var_invariant[v], self.var_invariant[reset_var], self.inc_transitions_bound[v] = "∞", "∞", "∞"
                return
            var_reset.append("({})+({})".format(self.var_invariant[reset_var], reset_const))
        
        self.var_invariant[v] = "({})+({})".format(self.inc_transitions_bound[v],"max{{{}}}".format(",".join(var_reset)))


    def compute_transition_bound_closure(self, t_index, visited):
        if self.transition_bounds[t_index]:
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
            '''
            Compute the Variable Max Value Bound, together with the total Increased Amount, 
            
            If it is not yet computed: Recusive Call
            Else: Terminate if there is a Loop Detected
            '''
            # print("VISITING STATE BEFORE CHECKING THE LOCAL BOUND ", v, visited, self.var_invariant[v])
            if (not self.var_invariant[v]) and (not visited[v]):
                # print("INITIAL VALUE FOR MAX BOUNC BEFORE COMPUTING", self.var_invariant[v])
                visited[v] = True
                self.compute_var_invariant(v, visited)
            elif (not self.var_invariant[v]) and visited[v]:
                self.transition_bounds[t_index], self.var_invariant[v] = "∞", "∞"
                return "∞"
            
            self.transition_bounds[t_index] = self.inc_transitions_bound[v]
            
            
            '''
            Compute the Max Value Reset to The Local Bound
            '''
            if not self.var_reset_chains[v]:
                for (reset_t, dc_var, dc_const) in self.reset_transitions[v]:
                    if not self.transition_bounds[reset_t]:
                        self.compute_transition_bound_closure(reset_t, visited)
                    if not dc_var:
                        self.transition_bounds[t_index] = "∞" if self.transition_bounds[reset_t] == "∞" else self.transition_bounds[t_index] + " + " + self.transition_bounds[reset_t] + " * "  + dc_const              
                    else:
                        if dc_var not in self.var_invariant.keys():
                                visited[dc_var] = True
                                self.compute_var_invariant(dc_var, visited)
                        self.transition_bounds[t_index] = "∞" if self.transition_bounds[reset_t] == "∞" else self.transition_bounds[t_index] + " * (" +  self.var_invariant[dc_var] + " + " + dc_const + ")"              

            else:
                longest_chains = [self.var_reset_chains[v][-1]]
                for reset_chain in self.var_reset_chains[v]:
                    min_transition, chain_in, chain_const = "", "", ""
                    for (reset_t, reset_var, reset_const) in reset_chain:
                        if not self.transition_bounds[reset_t]:
                            self.compute_transition_bound_closure(reset_t, visited) 
                        '''
                        Set the Bound to Infinity if detected an infinite bound, resulted by a previous Recusive Call
                        '''
                        if self.transition_bounds[reset_t] == "∞":
                            self.transition_bounds[t_index] = "∞"
                            
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


    def compute_transition_bounds(self):
        self.collect_var_modifications()
        print("The reset transitions,", self.reset_transitions)
        self.build_reset_graph()
        print("The reset graph: ", self.reset_graph, self.var_reset_chains)
        visited = {v: False for v in self.all_vars}
        for transition_index in (range(len(self.transition_graph.transitions))):
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