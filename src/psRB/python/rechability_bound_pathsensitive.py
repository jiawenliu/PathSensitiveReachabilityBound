from collections import defaultdict
from abstract_transition_graph import TransitionGraph, DifferenceConstraint
from bound_infer import TransitionBound
from program_refine import RefinedProg


class PathSensitiveReachabilityBound():

    def __init__(self, transition_graph=TransitionGraph()) -> None:
        self.transition_graph = transition_graph
        self.prog_loc_bound =  defaultdict(str)
        self.transition_path_rpchain_bound =  defaultdict(str)
        ################################ The Loop Bound for Single Loop Path without Path Interleaving ################################
        self.transition_bound_path_insensitive = TransitionBound(transition_graph)
        self.transition_path_psRB =  defaultdict(str)
        self.loop_chains = defaultdict(list)
        ################################ The Newly Added Data Structures for Computing Path and Loop Reachability Bound ################################
        self.tpath_localRB =  defaultdict(str)
        self.tpath_rb =  defaultdict(str)
        self.program_point_psRB = defaultdict(str)





############################################################################################################################################################################
######################################################################## THE REWROTE IMPLEMENTATION ########################################################################
############################################################################################################################################################################

    def get_ranks(self, prog):
        r = set()
        for t_id in prog.get_transitions():
            r.add(self.transition_bound_path_insensitive.transition_local_bounds[t_id])
        print("The Set of Ranks for Program : {} Are {}".format(prog.prog_signature(), r))
        return r

    def prog_initial(self, prog):
        def rank_inital(rank):
            (x, c) = rank
            if x == "1":
                return "1"
            if x == "Q":
                return "1"
            if x == "-1":
                return "INF"            
            rank_initial_set = set(["0"])
            for (transition_index, reset_var, reset_const) in self.transition_bound_path_insensitive.reset_transitions[x]:
                if self.transition_graph.transitions[transition_index][0]  <= prog.start_point:
                    rank_initial_set.add("({}) + ({})".format(self.transition_bound_path_insensitive.var_invariant[reset_var], reset_const))
            return "{} = {}".format(x, "max{{{}}}".format(", ".join([ri for ri in rank_initial_set])))

        return "{{ {} }}".format(",".join([rank_inital(x) for x in self.get_ranks(prog)]))

    def prog_guard(self, prog):
        transitions = prog.get_transitions()
        r = set()
        for (_, dc_set, _, _) in [self.transition_graph.transitions[t_id] for t_id in transitions]:
            if (dc_set[0].dc_type == DifferenceConstraint.DCType.WHILE or dc_set[0].dc_type == DifferenceConstraint.DCType.IF):
                (r.add(dc_set[0].dc_bexpr))
        ## For Debuging:
        print("The Guards Of The Program {} Are {}.".format(prog.get_id(), r))
        return r

    ### THE POST CONDITION AFTER THE PROGRAM EXECUTION
    def prog_post(self, prog):
        print("Program {}'s Post State Is : {}".format(prog.get_id(), "/\\".join(["¬( {} )".format(g) for g in self.prog_guard(prog)])))
        return "/\\".join([g for g in self.prog_guard(prog)])

    ### THE SATE OF RANKS RIGHT BEFORE THE PROGRAM IS BEEN VISITING THE SECOND TIME
    def prog_next(self, prog):
        def rank_next(rank):
            (x, c) = rank
            if x == "1":
                return "1"
            if x == "Q":
                return "1"
            if x == "-1":
                return "INF"            
        ### THE VALUE THAT THE RANK IS INCREASED IN ONE EXCUTION OF THE PROGAM
            rank_inc_set = set(["0"])
            for (transition_index, inc_const) in self.transition_bound_path_insensitive.inc_transitions[x]:
                (ls, dc, le, _) = self.transition_graph.transitions[transition_index]
                if  ls >= prog.start_point and le <= prog.end_point:
                    rank_inc_set.add(inc_const)
            rank_inc = "({})".format("+ ".join([v for v in rank_inc_set]))

        ### THE VALUE THAT THE RANK IS DECREASE IN ONE EXCUTION OF THE PROGAM
            rank_dec_set = set(["0"])
            for (transition_index, reset_var, dec_const) in self.transition_bound_path_insensitive.dec_transitions[x]:
                if self.transition_graph.transitions[transition_index][0]  <= prog.start_point:
                    rank_dec_set.add(dec_const)
            rank_dec = "({})".format("+ ".join([ri for ri in rank_dec_set]))

        ### THE VALUE THAT THE RANK IS RESET IN ONE EXCUTION OF THE PROGAM
            rank_reset_value, last_reset_point = "0", prog.start_point
            for (transition_index, reset_var, reset_const) in self.transition_bound_path_insensitive.reset_transitions[x]:
                if self.transition_graph.transitions[transition_index][0]  >= last_reset_point:
                    rank_reset_value, last_reset_point = ("({})+({})".format(self.transition_bound_path_insensitive.var_invariant[reset_var], reset_const)), self.transition_graph.transitions[transition_index][0]

            return "{} = ({})+({})-({})".format(x, rank_reset_value, rank_inc, rank_dec)

        return "{{{}}}".format(",".join([rank_next(x) for x in self.get_ranks(prog)]))

    def var_gd(self, prog):
        id = prog.get_id()
        if (not self.prog_loc_bound[id]):
           self.prog_loc_bound[id] = self.prog_BD(prog)
        return "{} *({} - {})".format(self.prog_loc_bound[id], self.prog_initial(prog), self.prog_next(prog))



    def prog_BD(self, refined_prog):
        id = refined_prog.get_id()
        if refined_prog.type == RefinedProg.RType.CHOICE:
            self.prog_loc_bound[id] = ("max(" + ",".join(self.prog_BD(choice_prog) for choice_prog in refined_prog.get_choices()) + ")")
        elif refined_prog.type == RefinedProg.RType.REPEAT:
            rp_prog = refined_prog.get_repeat()
            self.prog_loc_bound[id] = "(" + self.prog_initial(rp_prog) + " until "  + self.prog_post(rp_prog) + ") / (" + self.var_gd(rp_prog)
        elif refined_prog.type == RefinedProg.RType.SEQ:
            self.prog_loc_bound[id] = ("(" + "+".join(self.prog_BD(seq_prog) for seq_prog in refined_prog.get_seqs()) + ")")
        elif refined_prog.type == RefinedProg.RType.TP:
            self.prog_loc_bound[id] = "1"
        return self.prog_loc_bound[id]


    def prog_BD_by_path_insensitive_transition_bound(self, refined_prog):
        id = refined_prog.get_id()
        if refined_prog.type == RefinedProg.RType.CHOICE:
            self.prog_loc_bound[id] = ("max(" + ",".join(self.prog_BD(choice_prog) for choice_prog in refined_prog.get_choices()) + ")")
        elif refined_prog.type == RefinedProg.RType.REPEAT:
            rp_prog = refined_prog.get_repeat()
            self.prog_loc_bound[id] = "(" + self.prog_initial(rp_prog) + " until "  + self.prog_post(rp_prog) + ") / (" + self.var_gd(rp_prog)
        elif refined_prog.type == RefinedProg.RType.SEQ:
            self.prog_loc_bound[id] = ("(" + "+".join(self.prog_BD(seq_prog) for seq_prog in refined_prog.get_seqs()) + ")")
        elif refined_prog.type == RefinedProg.RType.TP:
            self.prog_loc_bound[id] = "1"
        return self.prog_loc_bound[id]

    def path_local_reachability_bound(self, prog):
        def local_nested_loops_dfs(prog, rp_bound, L=None):
            print("Computing the Repeat Chain for prog : ", prog.prog_signature())
            L = prog.get_loop_label() if prog.get_loop_label() else L
            rp_bound = "1" if prog.get_loop_label() else rp_bound
            if prog.type == RefinedProg.RType.CHOICE:
                for choice_prog in prog.get_choices():
                    (local_nested_loops_dfs(choice_prog, rp_bound, L))
            elif prog.type == RefinedProg.RType.REPEAT:
                local_nested_loops_dfs(prog.get_repeat(), self.prog_loc_bound[prog.get_id()]  + " * ("  + rp_bound + ")", L)
            elif prog.type == RefinedProg.RType.SEQ:
                for seq_prog in prog.get_seqs():
                    (local_nested_loops_dfs(seq_prog, rp_bound, L))
            elif prog.type == RefinedProg.RType.TP:
                self.tpath_localRB[prog.get_id()] = (L, rp_bound)
            else:
                return
        local_nested_loops_dfs(prog, "1")

    def loop_reachability_bound(self, tp_prog, loop_chain):

        def compute_loop_chain_bound(tp_prog, loop_chain):
            if not (loop_chain): return "1"
            (_, tp_rpchain_bound) = self.tpath_localRB[tp_prog.get_id()]
            loop_chain_bound = tp_rpchain_bound
            (_, tp_loop_prog) = loop_chain[-1]
            for (_, nested_loop_prog) in loop_chain[:-1]:
                loop_chain_bound += (" * " + compute_nested_lpchain_bound(nested_loop_prog, tp_loop_prog))
            print("Loop Reachability Bound of Loop {} w.r.t the Transition Path : {} is {}".format(loop_chain, tp_prog.get_id(), loop_chain_bound))
            return loop_chain_bound

            #### TODO: Loop Initial and Loop Next.
        def compute_nested_lpchain_bound(tp_prog, loop_prog):
            initial = self.prog_initial(tp_prog)
            final = self.prog_post(tp_prog)
            next = self.prog_next(loop_prog)
            return "(" + initial + "->"  + final + ")/(" + initial + "-" + next + ")"
        
        return compute_loop_chain_bound(tp_prog, loop_chain)


    def loop_initial(self):
        pass

    def path_reachability_bound(self, prog):
        def loop_chain_dfs(prog, loop_chain):
            print("Computing the Loop Chain for prog : ", prog.prog_signature())
            tmp = loop_chain + [(prog.get_loop_label(), prog)] if prog.get_loop_label() else loop_chain
            if prog.type == RefinedProg.RType.CHOICE:
                for choice_prog in prog.get_choices():
                    (loop_chain_dfs(choice_prog, tmp))
            elif prog.type == RefinedProg.RType.REPEAT:
                loop_chain_dfs(prog.get_repeat(), tmp)
            elif prog.type == RefinedProg.RType.SEQ:
                for seq_prog in prog.get_seqs():
                    (loop_chain_dfs(seq_prog, loop_chain))
            elif prog.type == RefinedProg.RType.TP:
                return self.loop_chains[prog.get_id()].append(loop_chain)
            else:
                return
        if not self.loop_chains:
            loop_chain_dfs(prog, [])

        def compute_transition_path_psRB(prog):
            if prog.type == RefinedProg.RType.TP:
                self.transition_path_psRB[prog.get_id()] = "max(" + ",".join(self.loop_reachability_bound(prog, loop_chain) for loop_chain in self.loop_chains[prog.get_id()]) + ")"
            if prog.type == RefinedProg.RType.CHOICE:
                for choice_prog in prog.get_choices():
                    (compute_transition_path_psRB(choice_prog))
            elif prog.type == RefinedProg.RType.REPEAT:
                compute_transition_path_psRB(prog.get_repeat())
            elif prog.type == RefinedProg.RType.SEQ:
                for seq_prog in prog.get_seqs():
                    (compute_transition_path_psRB(seq_prog))
            else:
                return
        
        return compute_transition_path_psRB(prog)


    def program_point_psRB_computation(self):
            for transition_path, bound in self.transition_path_psRB.items():
                for transition_id in [int(id) for id in (transition_path[1:-1].split(", "))]:
                    self.program_point_psRB[transition_id] = bound if not self.program_point_psRB[transition_id] else "{}+{}".format(self.program_point_psRB[transition_id], (bound))
            return

    def compute_psRB(self, prog):
        print("REFINED PROGRAM : {}".format(prog.prog_signature()))
        self.transition_bound_path_insensitive.compute_transition_bounds()
        self.prog_BD(prog)
        print("PROGRAM LOOP BOUND IS : ", self.prog_loc_bound)
        self.path_local_reachability_bound(prog)
        print("PATH LOCAL REACHABILITY BOUND IS : ", self.tpath_localRB)
        self.path_reachability_bound(prog)
        print("PATH GLOBAL REACHABILITY BOUND IS : ", self.transition_path_psRB)
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
        for prog, loop_chains in self.loop_chains.items():
            print("Loop Chains for the transition path at : ", prog, " are : ")
            for loop_ch in loop_chains:
                print("loop chain: ")
                for (loop_id, lprog) in loop_ch:
                    print(" -> : L-", loop_id, "prog: ", lprog.get_id())

    def print_transition_path_psRB(self):
        print("Number of Bounds Computed for the Transition Path is : ", len(self.transition_path_psRB))
        for  transition_path, bound in self.transition_path_psRB.items():
            print("psRB of The Transition Path : {} is {}".format(transition_path, bound))
        # print(["psRB of The Transition Path : {} is {} \n".format(transition_path, bound) for transition_path, bound in self.transition_path_psRB.items()])

    def print_program_point_psRB(self):
        print("Number of Bounds Computed for the Transition Path is : ", len(self.transition_path_psRB))
        for  transition_id, bound in self.program_point_psRB.items():
            print("psRB of The Program Point : {} is {}".format(transition_id, bound))
        # print(["psRB of The Program Point : {} is {} \n".format(transition_id, bound) for transition_id, bound in self.program_point_psRB.items()])

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

#     def __init__(self, transition_graph=TransitionGraph()) -> None:
#         self.transition_graph = transition_graph
#         self.transition_paths = []
#         self.tp_var_gd = []
#         self.prog_loc_bound =  defaultdict(str)
#         self.transition_path_rpchain_bound =  defaultdict(str)
#         self.prog_bound =  defaultdict(str)
#         ################################ The Loop Bound for Single Loop Path without Path Interleaving ################################
#         self.transition_bound = TransitionBound(transition_graph)
#         self.transition_path_ps_bound =  defaultdict(str)
#         self.loop_chains = defaultdict(list)
 

#     def compute_rb(self, prog):
#         print("REFINED PROGRAM : {}".format(prog.prog_signature()))
#         self.transition_bound.compute_transition_bounds()
#         self.outside_in(prog)
#         print("OUTSIDE IN BOUND IS : ", self.prog_loc_bound)
#         self.inside_out(prog)
#         return self.transition_path_ps_bound


#     # dfs until the TP, return the list of unique variables on all the transition paths.
#     def get_vars(self, prog):
#         transitions = prog.get_transitions()
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
#         if prog.type == RefinedProg.RType.CHOICE:
#             return ("max(" + ",".join(self.prog_next(choice_p) for choice_p in prog.get_choices()) + ")")
#         elif prog.type == RefinedProg.RType.REPEAT:
#             rp_prog = prog.get_repeat()
#             rp_id = rp_prog.get_id()
#             if (not self.prog_loc_bound[rp_id]):
#                 self.prog_loc_bound[rp_id] = self.outside_in(rp_prog)
#             return self.prog_loc_bound[rp_id]  + " * ("  + (self.prog_next(rp_prog)) + ")"
#         elif prog.type == RefinedProg.RType.SEQ:
#             return ("(" + "+".join(self.prog_next(seq_prog) for seq_prog in prog.get_seqs()) + ")")
#         elif prog.type == RefinedProg.RType.TP:
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
#         transitions = prog.get_transitions()
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
#         if refined_prog.type == RefinedProg.RType.CHOICE:
#             self.prog_loc_bound[id] = ("max(" + ",".join(self.outside_in(choice_prog) for choice_prog in refined_prog.get_choices()) + ")")
#             # return self.prog_loc_bound[id]
#             # ("max(" + ",".join(self.outside_in(choice_prog) for choice_prog in refined_prog.get_choices()) + ")")
#         elif refined_prog.type == RefinedProg.RType.REPEAT:
#             rp_prog = refined_prog.get_repeat()
#             self.prog_loc_bound[id] = "(" + self.prog_initial(rp_prog) + " until "  + self.prog_final(rp_prog) + ") / (" + self.var_gd(rp_prog)
#         elif refined_prog.type == RefinedProg.RType.SEQ:
#             self.prog_loc_bound[id] = ("(" + "+".join(self.outside_in(seq_prog) for seq_prog in refined_prog.get_seqs()) + ")")
#         elif refined_prog.type == RefinedProg.RType.TP:
#             self.prog_loc_bound[id] = "1"
#             # return "1"
#         return self.prog_loc_bound[id]



#     def inside_out(self, prog):
#         self.repeat_chain_dfs(prog, "1")
#         self.loop_chain_dfs(prog, [])
#         self.compute_transition_path_ps_bound(prog)

#     def repeat_chain_dfs(self, prog, rp_bound, L=None):
#         print("Computing the Repeat Chain for prog : ", prog.prog_signature())
#         L = prog.get_loop_label() if prog.get_loop_label() else L
#         rp_bound = "1" if prog.get_loop_label() else rp_bound
#         if prog.type == RefinedProg.RType.CHOICE:
#             for choice_prog in prog.get_choices():
#                 (self.repeat_chain_dfs(choice_prog, rp_bound, L))
#         elif prog.type == RefinedProg.RType.REPEAT:
#             self.repeat_chain_dfs(prog.get_repeat(), self.prog_loc_bound[prog.get_id()]  + " * ("  + rp_bound + ")", L)
#         elif prog.type == RefinedProg.RType.SEQ:
#             for seq_prog in prog.get_seqs():
#                 (self.repeat_chain_dfs(seq_prog, rp_bound, L))
#         elif prog.type == RefinedProg.RType.TP:
#             self.transition_path_rpchain_bound[prog.get_id()] = (L, rp_bound)
#         else:
#             return

    
#     def loop_chain_dfs(self, prog, loop_chain):
#         print("Computing the Loop Chain for prog : ", prog.prog_signature())
#         tmp = loop_chain + [(prog.get_loop_label(), prog)] if prog.get_loop_label() else loop_chain
#         if prog.type == RefinedProg.RType.CHOICE:
#             for choice_prog in prog.get_choices():
#                 (self.loop_chain_dfs(choice_prog, tmp))
#         elif prog.type == RefinedProg.RType.REPEAT:
#             self.loop_chain_dfs(prog.get_repeat(), tmp)
#         elif prog.type == RefinedProg.RType.SEQ:
#             for seq_prog in prog.get_seqs():
#                 (self.loop_chain_dfs(seq_prog, loop_chain))
#         elif prog.type == RefinedProg.RType.TP:
#             return self.loop_chains[prog.get_id()].append(loop_chain)
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
#         return "(" + initial + "->"  + final + ")/(" + initial + "-" + next + ")"


#     def compute_transition_path_ps_bound(self, prog):
#         if prog.type == RefinedProg.RType.TP:
#             self.transition_path_ps_bound[prog.get_id()] = "max(" + ",".join(self.compute_loop_chain_bound(prog, loop_chain) for loop_chain in self.loop_chains[prog.get_id()]) + ")"
#         if prog.type == RefinedProg.RType.CHOICE:
#             for choice_prog in prog.get_choices():
#                 (self.compute_transition_path_ps_bound(choice_prog))
#         elif prog.type == RefinedProg.RType.REPEAT:
#             self.compute_transition_path_ps_bound(prog.get_repeat())
#         elif prog.type == RefinedProg.RType.SEQ:
#             for seq_prog in prog.get_seqs():
#                 (self.compute_transition_path_ps_bound(seq_prog))
#         else:
#             return
    
#     def compute_prog_bound(self, prog):
#         p_id = (prog.get_id())
#         if prog.type == RefinedProg.RType.CHOICE:
#             self.prog_bound[p_id] = max(self.compute_prog_bound(choice_prog) for choice_prog in prog.get_choices())
#         elif prog.type == RefinedProg.RType.REPEAT:
#             self.prog_bound[p_id] = self.prog_loc_bound[p_id] * self.compute_prog_bound(prog.get_repeat())
#         elif prog.type == RefinedProg.RType.SEQ:
#             self.prog_bound[p_id] = sum(self.compute_prog_bound(seq_prog) for seq_prog in prog.get_seqs())
#         elif prog.type == RefinedProg.RType.TP:
#             self.prog_bound[p_id] = 1
#         else:
#             return




#     def print_loop_chain(self):
#         for prog, loop_chains in self.loop_chains.items():
#             print("Loop Chains for the transition path at : ", prog, " are : ")
#             for loop_ch in loop_chains:
#                 print("loop chain: ")
#                 for (loop_id, lprog) in loop_ch:
#                     print(" -> : L-", loop_id, "prog: ", lprog.get_id())

#     def print_transition_path_ps_bound(self):
#         print("Number of Bounds Computed for the Transition Path is : ", len(self.transition_path_ps_bound))
#         for  transition_path, bound in self.transition_path_ps_bound.items():
#             print("path Sensitive Reachability Bound for the Transition Path : ", transition_path, " is : ", bound)