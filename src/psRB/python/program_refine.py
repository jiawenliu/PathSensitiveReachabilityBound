import enum
from functools import reduce
from typing import DefaultDict
from abstract_transition_graph import TransitionGraph, DifferenceConstraint

class RefinedProg():
    class RType(enum.Enum):
        CHOICE = 1
        REPEAT = 2
        SEQ = 3
        TP = 4
    
    # type: The type of the refined program
    # prog: List of Refined Program
    def __init__(self, type = None, prog = None, loop_label = None, start_point = None, end_point = None):
        self.type = type
        self.prog = prog
        self.loop_label = loop_label
        self.start_point = start_point
        self.end_point = end_point
        self.prog_edges = self.build_edges()
        self.prog_id = self.build_id()


    def get_loop_label(self):
        return self.loop_label

    def get_choices(self):
        return self.prog

    def get_seqs(self):
        return self.prog

    def get_repeat(self):
        return self.prog
    
    def get_tp(self):
        return self.prog

    def get_edges(self):
        return self.prog_edges


    def get_transitions(self):
        if self.type == RefinedProg.RType.CHOICE:
            return reduce(lambda a, b: a.union(b), (choice_p.get_transitions() for choice_p in self.get_choices()), set())
        elif self.type == RefinedProg.RType.REPEAT:
            return self.get_repeat().get_transitions()
        elif self.type == RefinedProg.RType.SEQ:
            return reduce(lambda a, b: a.union(b), (seq_prog.get_transitions() for seq_prog in self.get_seqs()), set())
        elif self.type == RefinedProg.RType.TP:
            return set(self.prog)

    def build_edges(self):
        if self.type == RefinedProg.RType.CHOICE:
            return reduce(lambda a, b: a + b, (choice_p.get_edges() for choice_p in self.get_choices()), [])
        elif self.type == RefinedProg.RType.REPEAT:
            return self.get_repeat().get_edges()
        elif self.type == RefinedProg.RType.SEQ:
            seq1, seq2 = self.get_seqs()
            return seq1.get_edges() + [(seq1.end_point, seq2.start_point)] + seq2.get_edges()
        elif self.type == RefinedProg.RType.TP:
            return list(map(lambda edge: "{}->{}".format(edge[0], edge[1]),  zip(self.get_tp()[:-1], self.get_tp()[1:])))
        
        
    def build_id(self):
        if self.type == RefinedProg.RType.CHOICE:
            return reduce(lambda a, b: a + b, (choice_p.build_id() for choice_p in self.get_choices()), [])
        elif self.type == RefinedProg.RType.REPEAT:
            return self.get_repeat().build_id()
        elif self.type == RefinedProg.RType.SEQ:
            return reduce(lambda a, b: a + b, (seq_prog.build_id() for seq_prog in self.get_seqs()), [])
        elif self.type == RefinedProg.RType.TP:
            return (self.get_tp())



    def get_id(self):
        return str(self.prog_id)

    def prog_signature(self):
        if self.type == RefinedProg.RType.CHOICE:
            return "CH : {" + ",".join(choice_p.prog_signature() for choice_p in self.get_choices()) + "}"
        elif self.type == RefinedProg.RType.REPEAT:
            return "RP : (" + self.get_repeat().prog_signature() + ")"
        elif self.type == RefinedProg.RType.SEQ:
            return "SEQ : (" + ",".join(seq_prog.prog_signature() for seq_prog in self.get_seqs()) + ")"
        elif self.type == RefinedProg.RType.TP:
            return str(self.prog)
    
    def pretty_print(self):
        print(self.prog_signature())
    



class ProgramRefine():
    # Input: Abstract Transition Graph, 
    # Compute: refined Program with RefinedProg.RType

    def __init__(self, transition_graph) -> None:
        self.transition_graph = transition_graph
        self.refined_result = RefinedProg()
        self.loop_points = set()
        self.transition_paths = []
        self.transition_edges = []
        pass

    def collect_loop_point(self):
         self.loop_points = set([t[0] if t[1][0].dc_type == DifferenceConstraint.DCType.WHILE else None for t in self.transition_graph.transitions])
    
    def build_transition_path(self):
        def dfs(curr_path):
            ############ Initialize the Entrance Point ##########
            if not curr_path:
                curr_path.append(0)
            if (curr_path in self.transition_paths):
                return
            curr_point = curr_path[-1]
            if curr_point == self.transition_graph.vertices_num - 1:
                self.transition_paths.append(curr_path)
                return
            if curr_point in self.loop_points:
                self.transition_paths.append(curr_path)
                for next in self.transition_graph.graph[curr_point]:
                    dfs([curr_point, next])
            else:
                for next in self.transition_graph.graph[curr_point]:
                    dfs(curr_path + [next])
        dfs([])
        self.transition_paths.sort(key=lambda y: y[0])

    def build_program(self):
        working = [RefinedProg(RefinedProg.RType.TP, tpath, None, tpath[0], tpath[-1]) for tpath in self.transition_paths]

        # print("THE INITIAL WORKING LIST: ", working)
        while len(working) > 1:
            ############## Create the New Working List and recoding the Popped Sub-Programs ####################
            updated_working, pop_set = [], set()
            ############## Creating New Loops Paths  #################### 
            loop_paths_map = DefaultDict(list)
            for curr_prog in working:
                curr_start, curr_end = curr_prog.start_point, curr_prog.end_point
                if curr_start == curr_end:
                    loop_paths_map[curr_start].append(curr_prog)
                    pop_set.add(curr_prog)
            ############## Creating New Loops Paths Above  #################### 
            
            ############## Updating Sequences to Connecting the New Created Loops  #################### 
            for loop_point, loop_paths in  loop_paths_map.items():
                new_loop = RefinedProg(RefinedProg.RType.REPEAT, loop_paths[0], loop_point, loop_point, loop_point) if len(loop_paths) == 1 else RefinedProg(RefinedProg.RType.REPEAT, RefinedProg(RefinedProg.RType.CHOICE, loop_paths, None, loop_point, loop_point), loop_point, loop_point, loop_point) 
                for prefix_prog in working:
                    if prefix_prog in pop_set:
                        continue
                    if prefix_prog.end_point == loop_point:
                        new_prefix_prog = RefinedProg(RefinedProg.RType.SEQ, [prefix_prog, new_loop], None, prefix_prog.start_point, loop_point)
                        pop_set.add(prefix_prog)
                        for postfix_prog in working:
                            if postfix_prog.start_point == loop_point:
                                new_seq = RefinedProg(RefinedProg.RType.SEQ, [new_prefix_prog, postfix_prog], None, prefix_prog.start_point, postfix_prog.end_point)
                                if new_seq.get_id() not in list(map(lambda prog: prog.get_id(), updated_working)):
                                    # print("THE NEW CREATED SEQ: ", new_seq.prog_signature())
                                    updated_working.append(new_seq)
                                    pop_set.add(postfix_prog)
            ############## Add The Unchanged Programs From Old Working List Into The New Working List #################### 
            for prog in working:
                if prog not in pop_set:
                    updated_working.append(prog)
            
            # print("THE UPDATED WORKING LIST: {}".format(list(map(lambda prog: prog.prog_signature(), updated_working))))
            if working == updated_working:
                working = updated_working
                break
            working = updated_working
            working.sort(key=lambda prog: (prog.start_point, prog.end_point))
        print("THE TRANSLATED PROGRAM: ", working[-1].prog_signature())
        return working[-1]




    # def program_refine(self):
    #     self.transition_graph.transition_id_lookup()
    #     print(self.transition_graph.graph)
    #     def refine_dfs(curr_label, curr_transition_path, nested_while_path = []):
    #         print("CURRENT_LABEL: ", curr_label)
    #         print("CURRENT_Transition_Path: ", curr_transition_path)
    #         if len(self.transition_graph.graph[curr_label]) == 0:
    #             return  RefinedProg(RefinedProg.RType.TP, curr_transition_path)
    #         elif len(self.transition_graph.graph[curr_label]) == 1: 
    #             next_label = self.transition_graph.graph[curr_label][0]
    #             edge_id = str(curr_label) + "->" + str(next_label)
    #             next_transition_id = self.transition_graph.edge_indices[str(curr_label) + "->" + str(next_label)]
    #             print("Single Path to The Nest Label %d Trough Transition Edge: %s" % (next_label, edge_id))
    #             if self.transition_graph.transitions[curr_transition_path[0]][0] == next_label:
    #                 return RefinedProg(RefinedProg.RType.TP, curr_transition_path + [next_transition_id])
    #                 return RefinedProg(RefinedProg.RType.TP, curr_transition_path[max(0, len(nested_while_path)-1):] + [next_transition_id])
    #             else:
    #                 return refine_dfs(next_label, curr_transition_path + [next_transition_id], nested_while_path) 
    #         else:
    #             [next_label_true, next_label_false] = self.transition_graph.graph[curr_label]
    #             print("Building Mutiple Paths From Guard: {} to Its Next Two Labels: {} to the True Path and {} to The False Path".format(curr_label, next_label_true, next_label_false) )
    #             next_transition_id_true, next_transition_id_false = self.transition_graph.edge_indices[str(curr_label) + "->" + str(next_label_true)], self.transition_graph.edge_indices[str(curr_label) + "->" + str(next_label_false)]
    #             if self.transition_graph.transitions[next_transition_id_true][1][0].dc_type == DifferenceConstraint.DCType.WHILE:
    #                 ####################################### FOR DEBUG ###################################################
    #                 tprog1 = RefinedProg(RefinedProg.RType.TP, curr_transition_path)
    #                 print("Mutliple Path From While Header to The While Body via The Nest Label %d Through Transition: %d" % (next_label_true, next_transition_id_true))
    #                 body = refine_dfs(next_label_true, [next_transition_id_true], [])
    #                 print("Mutliple Path From While Header to The While Exit via The Nest Label %d Through Transition: %d" % (next_label_false, next_transition_id_false))
    #                 tprog2 = refine_dfs(next_label_false, [next_transition_id_false], nested_while_path + curr_transition_path + [next_transition_id_false])
    #                 return RefinedProg(RefinedProg.RType.SEQ, [tprog1, RefinedProg(RefinedProg.RType.REPEAT, body, loop_label = curr_label), tprog2])
    #                 ####################################### FOR RELEASE ###################################################
    #                 return RefinedProg(RefinedProg.RType.SEQ, [RefinedProg(RefinedProg.RType.TP, curr_transition_path), RefinedProg(RefinedProg.RType.REPEAT, body), refine_dfs(next_label_false, [next_transition_id_false])])
    #             else:
    #                 ####################################### FOR DEBUG ###################################################
    #                 print("Mutliple Path From If Header to The True Branch via The Nest Label %d Through Transition: %d" % (next_label_true, next_transition_id_true))
    #                 prog_true = refine_dfs(next_label_true, curr_transition_path + [next_transition_id_true], nested_while_path)
    #                 print("Mutliple Path From If Header to The False Branch via The Nest Label %d Through Transition: %d" % (next_label_true, next_transition_id_true))
    #                 prog_false = refine_dfs(next_label_false, curr_transition_path + [next_transition_id_false], nested_while_path)
    #                 return RefinedProg(RefinedProg.RType.CHOICE, [prog_true, prog_false])
    #                 ####################################### FOR RELEASE ###################################################
    #                 return RefinedProg(RefinedProg.RType.CHOICE, [refine_dfs(next_label_true, curr_transition_path + [next_transition_id_true]), refine_dfs(next_label_true, curr_transition_path + [next_transition_id_false])])
    #     return refine_dfs(1, [0], [])

    def program_refine(self):
        self.collect_loop_point()
        print("LOOP POINTS: ", self.loop_points)
        self.build_transition_path()
        print("THE SIMPLE TRANSITION PATHS :", self.transition_paths)
        
        return self.build_program()

    def get_result(self):
        print("REFINED PROGRAM : {}".format(self.refined_result.prog_signature()))
        return self.refined_result

