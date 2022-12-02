from collections import defaultdict
from re import L
from abstract_transition_graph import TransitionGraph
from symbolic_expression import SymbolicExpression, SymbolicConst
from pathinsensitive_transition_bound import TransitionBound

class PathSensitiveReachabilityBound():

    def __init__(self, transition_graph=TransitionGraph()) -> None:
        self.transition_graph = transition_graph
        self.prog_loc_bound =  defaultdict(str)
        ################################ The Loop Bound for Single Loop Path without Path Interleaving ################################
        self.transition_bound_path_insensitive = TransitionBound(transition_graph)
        self.loop_chain = defaultdict(list)
        ################################ The Newly Added Data Structures for Computing Path and Loop Reachability Bound ################################
        self.transition_path_localRB =  defaultdict(str)
        self.transition_path_psRB =  defaultdict(str)
        self.loop_rb =  defaultdict(str)
        self.program_point_psRB = defaultdict(str)


############################################################################################################################################################################
######################################################################## THE REWROTE IMPLEMENTATION ########################################################################
############################################################################################################################################################################

    def prog_transition_ids(self, prog):
        return [self.transition_graph.transition_id_lookup(edge) for edge in prog.get_edges()]
    
    def prog_transitions(self, prog):
        return [self.transition_graph.transitions[t_id] for t_id in self.prog_transition_ids(prog)]

    def get_ranks(self, prog):
        r = set()
        for t_id in self.prog_transition_ids(prog):
            r.add(self.transition_bound_path_insensitive.transition_local_bounds[t_id])
        # print("The Set of Ranks for Program : {} Are {}".format(prog.get_signature(), r))
        return r

    def prog_initial(self, prog):
        def rank_inital(rank):
            (x, c) = rank
            if x == "1":
                return {"1" : "1"}
            if x == "Q":
                return  {"Q" : "1"}
            if x == "-1":
                return {"-1" : "INF"}            
            rank_initial_set = set(["0"])
            for (transition_index, reset_var, reset_const) in self.transition_bound_path_insensitive.reset_transitions[x]:
                if self.transition_graph.transitions[transition_index][0]  <= prog.start_point:
                    rank_initial_set.add("({})+({})".format(self.transition_bound_path_insensitive.var_invariant[reset_var], reset_const))
            return ("max{{{}}}".format(",".join([ri for ri in rank_initial_set])))
        return {x : rank_inital(x) for x in self.get_ranks(prog)}


    def prog_guard(self, prog):
        r = set()
        for (_, dc_set, _, _) in self.prog_transitions(prog):
            if (dc_set[0].is_guard()):
                (r.add(dc_set[0].get_guard_expr()))
        # print("The Guards Of The Program {} Are {}.".format(prog.get_id(), r))
        return r


    ### THE POST CONDITION AFTER THE PROGRAM EXECUTION
    def prog_post(self, prog):
        # print("Program {}'s Post State Is : {}".format(prog.get_id(), "Λ".join(["¬({})".format(g) for g in self.prog_guard(prog)])))
        return "Λ".join([g for g in self.prog_guard(prog)])


    ### THE SATE OF RANKS RIGHT BEFORE THE PROGRAM IS BEEN VISITING THE SECOND TIME
    def prog_next(self, prog):
        def rank_next(rank):
            (x, c) = rank
            if x == "1":
                return {"1" : "1"}
            if x == "Q":
                return  {"Q" : "1"}
            if x == "-1":
                return {"-1" : "INF"}           
        ### THE VALUE THAT THE RANK IS INCREASED IN ONE EXCUTION OF THE PROGAM
            rank_inc_set = set(["0"])
            for (transition_index, inc_const) in self.transition_bound_path_insensitive.inc_transitions[x]:
                (ls, dc, le, _) = self.transition_graph.transitions[transition_index]
                if  ls >= prog.start_point and le <= prog.end_point:
                    rank_inc_set.add(inc_const)
            rank_inc = "({})".format("+ ".join([v for v in rank_inc_set]))

        ### THE VALUE THAT THE RANK IS DECREASE IN ONE EXCUTION OF THE PROGAM
            rank_dec_set = set(["0"])
            for (transition_index, dec_const) in self.transition_bound_path_insensitive.dec_transitions[x]:
                (ls, dc, le, _) = self.transition_graph.transitions[transition_index]
                if  ls >= prog.start_point and le <= prog.end_point:
                    rank_dec_set.add(dec_const)
            rank_dec = "({})".format("+ ".join([ri for ri in rank_dec_set]))

        ### THE VALUE THAT THE RANK IS RESET IN ONE EXCUTION OF THE PROGAM
            rank_reset_value, last_reset_point = "0", prog.start_point
            for (transition_index, reset_var, reset_const) in self.transition_bound_path_insensitive.reset_transitions[x]:
                (ls, dc, le, _) = self.transition_graph.transitions[transition_index]

                if ls >= prog.start_point and le <= prog.end_point and ls  >= last_reset_point:
                    rank_reset_value, last_reset_point = ("({})+({})".format(self.transition_bound_path_insensitive.var_invariant[reset_var], reset_const)), ls

            return "({})+({})-({})".format(x, rank_reset_value, rank_inc, rank_dec)
        return {x : rank_next(x) for x in self.get_ranks(prog)}


    def var_gd(self, prog):
        if (not self.prog_loc_bound[prog.get_id()]):
           self.prog_loc_bound[prog.get_id()] = self.prog_BD(prog)
        return {x: "{}×({}-{})".format(self.prog_loc_bound[prog.get_id()].pretty_print(), self.prog_initial(prog)[x], self.prog_next(prog)[x]) for x in self.get_ranks(prog)}

    def loop_initial(self, loop_prog, tp_prog):
        return self.prog_initial(loop_prog)
    
    def loop_next(self, loop_prog, tp_prog):
        return {x: "{}+{}×{}".format(self.prog_next(loop_prog)[x], self.prog_loc_bound[tp_prog.get_id()].pretty_print(), self.prog_next(tp_prog)[x]) for x in self.get_ranks(tp_prog)}


    #TODO: Implement the LOCAL variable max value computation
    def compute_variable_local_bound(self, prog, x):
        (local_transitions, local_edges) = (zip(*[(self.transition_graph.transitions[i], self.transition_graph.edges[i]) for i in set(self.prog_transition_ids(prog))]))
        bounder = TransitionBound(TransitionGraph(list(local_edges), list(local_transitions)))
        bounder.compute_transition_bounds(prog)

        return bounder.var_invariant[x]



    def prog_BD(self, refined_prog):
        id = refined_prog.get_id()
        if refined_prog.is_choice():
            self.prog_loc_bound[id] = SymbolicExpression(SymbolicConst("max{{{}}}".format(",".join(self.prog_BD(choice_prog) for choice_prog in refined_prog.get_choices()))))
        elif refined_prog.is_repeat():
            rp_prog = refined_prog.get_repeat()
            init, post, decent = self.prog_initial(rp_prog), self.prog_post(rp_prog), self.var_gd(rp_prog)
            self.prog_loc_bound[id] = SymbolicExpression(SymbolicConst("max{{{}}}".format(','.join(["{}:({}→{})/({})".format(x[0], init[x], post, decent[x]) for x in self.get_ranks(refined_prog)]))))
        elif refined_prog.is_seq():
            self.prog_loc_bound[id] = SymbolicExpression(SymbolicConst("({})".format("+".join(self.prog_BD(seq_prog) for seq_prog in refined_prog.get_seqs()))))
        elif refined_prog.is_transition_path():
            self.prog_loc_bound[id] = SymbolicExpression(SymbolicConst(1))
        return self.prog_loc_bound[id]


    def prog_BD_by_path_insensitive_transition_bound(self, prog):
        (local_transitions, local_edges) = (zip(*[(self.transition_graph.transitions[i], self.transition_graph.edges[i]) for i in set(self.prog_transition_ids(prog))]))
        bounder = TransitionBound(TransitionGraph(list(local_edges), list(local_transitions)))
        bounder.compute_transition_bounds(prog)
        self.prog_loc_bound[prog.get_id()] = SymbolicExpression([SymbolicConst(self.transition_bound_path_insensitive.transition_bounds[transition_id]) for transition_id in set(self.prog_transition_ids(prog))], "min")
        self.prog_loc_bound[prog.get_id()] = SymbolicExpression(SymbolicConst(bounder.transition_bounds[0]))        
        if prog.is_choice():
            for choice_prog in prog.get_choices():
                self.prog_BD_by_path_insensitive_transition_bound(choice_prog)
        elif prog.is_repeat():
            self.prog_BD_by_path_insensitive_transition_bound(prog.get_repeat())
        elif prog.is_seq():
            for seq_prog in prog.get_seqs():
                self.prog_BD_by_path_insensitive_transition_bound(seq_prog)
        return self.prog_loc_bound[prog.get_id()]

    def prog_BD_by_BOUNDFINDER(self, prog):
        pass


    def path_local_reachability_bound(self, prog):
        def local_nested_loops_dfs(prog, rp_bound, L=None):
            L = prog.get_loop_label() if prog.get_loop_label() else L
            rp_bound = "1" if prog.get_loop_label() else rp_bound
            if prog.is_choice():
                for choice_prog in prog.get_choices():
                    (local_nested_loops_dfs(choice_prog, rp_bound, L))
            elif prog.is_repeat():
                local_nested_loops_dfs(prog.get_repeat(), "({}×{})".format(self.prog_loc_bound[prog.get_id()].pretty_print(), rp_bound), L)
            elif prog.is_seq():
                for seq_prog in prog.get_seqs():
                    (local_nested_loops_dfs(seq_prog, rp_bound, L))
            elif prog.is_transition_path():
                self.transition_path_localRB[prog.get_id()] = (L, rp_bound)
            else:
                return

        local_nested_loops_dfs(prog, "1")

    def compute_global_psRB(self, tp_prog):

        def compute_psRB_through_loop_chain(tp_prog, loop_chain):
            if not (loop_chain): return "1"
            if loop_chain[0][0] == self.transition_path_localRB[tp_prog.get_id()][0]: 
                return self.transition_path_localRB[tp_prog.get_id()][1]
            return "({}×{})".format(compute_nested_lpchain_bound(loop_chain[0][1], tp_prog), compute_psRB_through_loop_chain(tp_prog, loop_chain[1:]))
            

        def compute_nested_lpchain_bound(loop_prog, tp_prog):
            init, post, next = self.loop_initial(loop_prog, tp_prog), self.prog_post(tp_prog), self.loop_next(loop_prog, tp_prog)
            return "max{{{}}}".format(",".join(["{}:({})/({})".format(x[0], self.compute_variable_local_bound(loop_prog, x[0]), next[x]) for x in self.get_ranks(tp_prog)]))

            init, post, next = self.loop_initial(loop_prog, tp_prog), self.prog_post(tp_prog), self.loop_next(loop_prog, tp_prog)
            return "max({})".format(",".join(["{}:({}→{})/({})".format(x[0], init[x], post, next[x]) for x in self.get_ranks(tp_prog)]))
        
        return compute_psRB_through_loop_chain(tp_prog, self.loop_chain[tp_prog.get_id()])



    def path_reachability_bound(self, prog):
        def loop_chain_dfs(prog, loop_chain):
            tmp = loop_chain + [(prog.get_loop_label(), prog)] if prog.get_loop_label() else loop_chain
            if prog.is_choice():
                for choice_prog in prog.get_choices():
                    (loop_chain_dfs(choice_prog, tmp))
            elif prog.is_repeat():
                loop_chain_dfs(prog.get_repeat(), tmp)
            elif prog.is_seq():
                for seq_prog in prog.get_seqs():
                    (loop_chain_dfs(seq_prog, loop_chain))
            elif prog.is_transition_path():
                self.loop_chain[prog.get_id()] = loop_chain
                return 
            else:
                return

        if not self.loop_chain:
            loop_chain_dfs(prog, [])

        def compute_transition_path_psRB(prog):
            if prog.is_transition_path():
                self.transition_path_psRB[prog.get_id()] = SymbolicExpression(SymbolicConst(self.compute_global_psRB(prog)))
            if prog.is_choice():
                for choice_prog in prog.get_choices():
                    (compute_transition_path_psRB(choice_prog))
            elif prog.is_repeat():
                compute_transition_path_psRB(prog.get_repeat())
            elif prog.is_seq():
                for seq_prog in prog.get_seqs():
                    (compute_transition_path_psRB(seq_prog))
            else:
                return
        
        return compute_transition_path_psRB(prog)


    def program_point_psRB_computation(self):
            for transition_path, bound in self.transition_path_psRB.items():
                for point in [int(id) for id in (transition_path[1:-1].split(", "))]:
                    self.program_point_psRB[point] = bound if not self.program_point_psRB[point] else  bound + self.program_point_psRB[point]
            return

    def compute_psRB(self, prog):
        print("REFINED PROGRAM : {}".format(prog.get_signature()))

        ''' 
        Compute the Program Loop BD, By Three Ways:
        '''
        ''' Loop BD - 1: By the Initial State, Final State, Var Decent + SMT Solver:'''
        # self.prog_BD(prog)
        ''' Loop BD - 2: By the Path-insensitive Transition Bound in Paper JAR17:'''
        self.transition_bound_path_insensitive.compute_transition_bounds(prog)
        self.transition_bound_path_insensitive.print_transition_bounds()
        self.prog_BD_by_path_insensitive_transition_bound(prog)
        ''' Loop BD - 3: By the INIT, NEXT + External API in Paper PLDI09-ProgressInvariants:'''
        # self.prog_BD_by_BOUNDFINDER(prog)
        self.print_program_loop_BD()

        ''' 
        Compute The Path Local Reachability Bound
        '''
        self.path_local_reachability_bound(prog)
        print("PATH LOCAL REACHABILITY BOUND IS : ", self.transition_path_localRB)
        ''' 
        Compute The Reachability Bound of Each Transition Path
        '''        
        self.path_reachability_bound(prog)
        print("PATH GLOBAL REACHABILITY BOUND IS : ", self.transition_path_psRB)

        ''' 
        Compute The Reachability Bound of Each Program Point
        '''        
        self.program_point_psRB_computation()

        return self.program_point_psRB


######################################################################## Computation Intereface ########################################################################

    def get_transition_path_psRB(self):
        return self.transition_path_psRB

    def get_program_point_psRB(self):
        return self.program_point_psRB

    def get_transition_psRB(self):
        return self.program_point_psRB


######################################################################## Pretty Print Intereface ########################################################################

    def print_loop_chain(self):
        for prog, loop_chains in self.loop_chain.items():
            print("Loop Chains for the transition path at : ", prog, " are : ")
            for loop_ch in loop_chains:
                print("loop chain: ")
                for (loop_id, lprog) in loop_ch:
                    print("→:L-", loop_id, "prog: ", lprog.get_id())

    def print_transition_path_psRB(self):
        print("Number of Bounds Computed for the Transition Path is : ", len(self.transition_path_psRB))
        for  transition_path, bound in self.transition_path_psRB.items():
            print("psRB of The Transition Path : {} is {}".format(transition_path, bound.pretty_print()))

    def print_program_point_psRB(self):
        print("Number of Bounds Computed for the Program Points is : ", len(self.program_point_psRB))
        for  program_point, bound in self.program_point_psRB.items():
            print("psRB of The Program Point : {} is {}".format(program_point, bound.pretty_print()))

    def print_program_loop_BD(self):
        print("Number of BD Computed for the Program Loop is : ", len(self.prog_loc_bound))
        for  prog_id, bound in self.prog_loc_bound.items():
            print("Loop BD for The Program : {} is {}".format(prog_id, bound.pretty_print()))

    def print_path_bound(self):
        print("Number of Repeat Chain Bounds Computed for the Transition Path is : ", len(self.dec_transitions))
        for  transition, bound in self.dec_transitions.items():
            print("Repeat Chain Bound for the Transition Path : ", transition, " is : ", bound)
    




# ############################################################################################################################################################################
# ######################################################################## THE PREVIOUS IMPLEMENTATION ########################################################################
# ############################################################################################################################################################################

# class PathSensitiveReachabilityBoundI():
#     '''
#     Implementation of the InsidOut and OutsideIn Algorithm
#     By Computing the Lopp Chain, Repeat Chain, Repeat Chain Bounds, Relative Loop Bounds, And the rInitial, rFinal, rNext, varGD, lpInit.... States.
#     '''

#     def __init__(self, transition_graph=TransitionGraph()) → None:
#         self.transition_graph = transition_graph
#         self.transition_paths = []
#         self.tp_var_gd = []
#         self.prog_loc_bound =  defaultdict(str)
#         self.transition_path_rpchain_bound =  defaultdict(str)
#         self.prog_bound =  defaultdict(str)
#         ################################ The Loop Bound for Single Loop Path without Path Interleaving ################################
#         self.transition_bound = TransitionBound(transition_graph)
#         self.transition_path_ps_bound =  defaultdict(str)
#         self.loop_chain = defaultdict(list)
 

#     def compute_rb(self, prog):
#         print("REFINED PROGRAM : {}".format(prog.get_signature()))
#         self.transition_bound.compute_transition_bounds()
#         self.outside_in(prog)
#         print("OUTSIDE IN BOUND IS : ", self.prog_loc_bound)
#         self.inside_out(prog)
#         return self.transition_path_ps_bound


#     # dfs until the TP, return the list of unique variables on all the transition paths.
#     def get_vars(self, prog):
#         transitions = self.prog_transitions(prog)
#         r = set()
#         for (_, dc_set, _, _) in [self.transition_graph.transitions[t_id] for t_id in transitions]:
#             for dc in dc_set:
#                 if(not (dc.dc_type == DifferenceConstraint.DCType.WHILE or dc.dc_type == DifferenceConstraint.DCType.IF)):
#                     (r.add(dc.var))
#         ## For Debuging:
#         print("The Variables Set for Program : ", prog.get_id(), " is : ", r)
#         return r
    
#     def prog_initial(self, prog):
#         ## For Debuging:
#         temp = "/\\".join([str(v) + "= " + str(self.transition_bound.var_invariant[v]) for v in self.get_vars(prog)])
#         print("the INITIAL state for program : ", prog.get_id(), " is : ", temp)
#         ## For Releasing:
#         #### TODO: ADD the restriction on the label order.
#         ### THE label should smaller than first label of prog
#         return "/\\".join(["{} = {}" .format(v, self.transition_bound.var_invariant[v]) for v in self.get_vars(prog)])


#     def prog_final(self, prog):
#         f = self.prog_invariant(prog)
#         print("the FINAL state for program : ", prog.get_id(), " is : ", "¬(" + f + ")")

#         return " ¬(" + self.prog_invariant(prog) + ")"

#     def prog_next(self, prog):
#         if prog.is_choice():
#             return ("max(" + ",".join(self.prog_next(choice_p) for choice_p in prog.get_choices()) + ")")
#         elif prog.is_repeat():
#             rp_prog = prog.get_repeat()
#             rp_id = rp_prog.get_id()
#             if (not self.prog_loc_bound[rp_id]):
#                 self.prog_loc_bound[rp_id] = self.outside_in(rp_prog)
#             return self.prog_loc_bound[rp_id]  + " * ("  + (self.prog_next(rp_prog)) + ")"
#         elif prog.is_seq():
#             return ("(" + "+".join(self.prog_next(seq_prog) for seq_prog in prog.get_seqs()) + ")")
#         elif prog.is_transition_path():
#             return ("(" + "+".join([
#                 (str("+".join([inc[1] for inc in self.transition_bound.inc_transitions[v]])) if self.transition_bound.inc_transitions[v] else "0") for v in self.get_vars(prog)]) + ")")

#     def prog_invariant(self, prog):
#         return "/\\".join(self.get_assumes(prog))


#     def var_gd(self, prog):
#         id = prog.get_id()
#         if (not self.prog_loc_bound[id]):
#            self.prog_loc_bound[id] = self.outside_in(prog)
#         ## For Debuging:
#         next = self.prog_next(prog)
#         print("the NEXT state for program : ", prog.get_id(), " is : ", next)

#         ## For Releasing:
#         return self.prog_loc_bound[id]  + " * ("  +  self.prog_initial(prog) + " - "  + self.prog_next(prog) + ")"



#     # dfs until the TP, return the list of assumptions on all the transition paths.
#     def get_assumes(self, prog):
#         transitions = self.prog_transitions(prog)
#         r = set()
#         for (_, dc_set, _, _) in [self.transition_graph.transitions[t_id] for t_id in transitions]:
#             for dc in dc_set:
#                 if dc.dc_type == DifferenceConstraint.DCType.ASUM:
#                     (r.add(dc.dc_bexpr))
#         ## For Debuging:
#         print("The Assumptions for Program : ", prog.get_id(), " is : ", r)
#         return r


#     def outside_in(self, refined_prog):
#         id = refined_prog.get_id()
#         if refined_prog.is_choice():
#             self.prog_loc_bound[id] = ("max(" + ",".join(self.outside_in(choice_prog) for choice_prog in refined_prog.get_choices()) + ")")
#             # return self.prog_loc_bound[id]
#             # ("max(" + ",".join(self.outside_in(choice_prog) for choice_prog in refined_prog.get_choices()) + ")")
#         elif refined_prog.is_repeat():
#             rp_prog = refined_prog.get_repeat()
#             self.prog_loc_bound[id] = "(" + self.prog_initial(rp_prog) + " until "  + self.prog_final(rp_prog) + ") / (" + self.var_gd(rp_prog)
#         elif refined_prog.is_seq():
#             self.prog_loc_bound[id] = ("(" + "+".join(self.outside_in(seq_prog) for seq_prog in refined_prog.get_seqs()) + ")")
#         elif refined_prog.is_transition_path():
#             self.prog_loc_bound[id] = "1"
#             # return "1"
#         return self.prog_loc_bound[id]



#     def inside_out(self, prog):
#         self.repeat_chain_dfs(prog, "1")
#         self.loop_chain_dfs(prog, [])
#         self.compute_transition_path_ps_bound(prog)

#     def repeat_chain_dfs(self, prog, rp_bound, L=None):
#         print("Computing the Repeat Chain for prog : ", prog.get_signature())
#         L = prog.get_loop_label() if prog.get_loop_label() else L
#         rp_bound = "1" if prog.get_loop_label() else rp_bound
#         if prog.is_choice():
#             for choice_prog in prog.get_choices():
#                 (self.repeat_chain_dfs(choice_prog, rp_bound, L))
#         elif prog.is_repeat():
#             self.repeat_chain_dfs(prog.get_repeat(), self.prog_loc_bound[prog.get_id()]  + " * ("  + rp_bound + ")", L)
#         elif prog.is_seq():
#             for seq_prog in prog.get_seqs():
#                 (self.repeat_chain_dfs(seq_prog, rp_bound, L))
#         elif prog.is_transition_path():
#             self.transition_path_rpchain_bound[prog.get_id()] = (L, rp_bound)
#         else:
#             return

    
#     def loop_chain_dfs(self, prog, loop_chain):
#         print("Computing the Loop Chain for prog : ", prog.get_signature())
#         tmp = loop_chain + [(prog.get_loop_label(), prog)] if prog.get_loop_label() else loop_chain
#         if prog.is_choice():
#             for choice_prog in prog.get_choices():
#                 (self.loop_chain_dfs(choice_prog, tmp))
#         elif prog.is_repeat():
#             self.loop_chain_dfs(prog.get_repeat(), tmp)
#         elif prog.is_seq():
#             for seq_prog in prog.get_seqs():
#                 (self.loop_chain_dfs(seq_prog, loop_chain))
#         elif prog.is_transition_path():
#             return self.loop_chain[prog.get_id()].append(loop_chain)
#         else:
#             return
    
#     def compute_loop_chain_bound(self, tp_prog, loop_chain):
#         ### FOR DEBUGGING
#         if not (loop_chain): return "1"
#         (_, tp_rpchain_bound) = self.transition_path_rpchain_bound[tp_prog.get_id()]
#         loop_chain_bound = tp_rpchain_bound
#         (_, tp_loop_prog) = loop_chain[-1]
#         for (_, nested_loop_prog) in loop_chain[:-1]:
#             loop_chain_bound += (" * " + self.compute_nested_lpchain_bound(nested_loop_prog, tp_loop_prog))
#         print("Loop Chain Bound for the Transition Path : ", tp_prog.get_id(), " is : ", loop_chain_bound)
#         return loop_chain_bound
#         ### FOR RELEASE
#         if not (loop_chain): return "1"
#         return self.transition_path_rpchain_bound[tp_prog.get_id()][1] + ("*".join([self.compute_nested_lpchain_bound(loop_prog, loop_chain[-1][1]) for (_, loop_prog) in  loop_chain[:-1]]))

#     def compute_nested_lpchain_bound(self, tp_prog, loop_prog):
#         #### TODO: ADD the restriction on the label order.
#         ### THE label should smaller than first label of tp_prog and greater than loop_prog
#         initial = self.prog_initial(tp_prog)
#         final = " ¬(" + self.prog_invariant(tp_prog) + ")"
#         next = self.prog_next(loop_prog)
#         return "(" + initial + "→"  + final + ")/(" + initial + "-" + next + ")"


#     def compute_transition_path_ps_bound(self, prog):
#         if prog.is_transition_path():
#             self.transition_path_ps_bound[prog.get_id()] = "max(" + ",".join(self.compute_loop_chain_bound(prog, loop_chain) for loop_chain in self.loop_chain[prog.get_id()]) + ")"
#         if prog.is_choice():
#             for choice_prog in prog.get_choices():
#                 (self.compute_transition_path_ps_bound(choice_prog))
#         elif prog.is_repeat():
#             self.compute_transition_path_ps_bound(prog.get_repeat())
#         elif prog.is_seq():
#             for seq_prog in prog.get_seqs():
#                 (self.compute_transition_path_ps_bound(seq_prog))
#         else:
#             return
    
#     def compute_prog_bound(self, prog):
#         p_id = (prog.get_id())
#         if prog.is_choice():
#             self.prog_bound[p_id] = max(self.compute_prog_bound(choice_prog) for choice_prog in prog.get_choices())
#         elif prog.is_repeat():
#             self.prog_bound[p_id] = self.prog_loc_bound[p_id] * self.compute_prog_bound(prog.get_repeat())
#         elif prog.is_seq():
#             self.prog_bound[p_id] = sum(self.compute_prog_bound(seq_prog) for seq_prog in prog.get_seqs())
#         elif prog.is_transition_path():
#             self.prog_bound[p_id] = 1
#         else:
#             return




#     def print_loop_chain(self):
#         for prog, loop_chains in self.loop_chain.items():
#             print("Loop Chains for the transition path at : ", prog, " are : ")
#             for loop_ch in loop_chains:
#                 print("loop chain: ")
#                 for (loop_id, lprog) in loop_ch:
#                     print(" → : L-", loop_id, "prog: ", lprog.get_id())

#     def print_transition_path_ps_bound(self):
#         print("Number of Bounds Computed for the Transition Path is : ", len(self.transition_path_ps_bound))
#         for  transition_path, bound in self.transition_path_ps_bound.items():
#             print("path Sensitive Reachability Bound for the Transition Path : ", transition_path, " is : ", bound)