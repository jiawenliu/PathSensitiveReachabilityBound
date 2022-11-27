import enum
from functools import reduce
from typing import DefaultDict
from abstract_transition_graph import DifferenceConstraint


# ############################################################################################################################################################################
# ######################################################################## THE REFINED PROGRAM TYPE ########################################################################
# ############################################################################################################################################################################

class RefinedProg():
    class RType(enum.Enum):
        CHOICE = 1
        REPEAT = 2
        SEQ = 3
        TP = 4
    
    '''
    type: in RType, The type of the refined program
    prog: in RType List, List of Refined Program
    '''
    def __init__(self, type = None, prog = None, loop_label = None, start_point = None, end_point = None):
        self.type = type
        self.prog = prog
        self.loop_label = loop_label
        self.start_point = start_point
        self.end_point = end_point
        self.prog_edges = self.build_edges()
        self.prog_id = self.build_id()
        self.prog_signature = self.build_signature()


######################################################################## Program Property/Data Intereface ########################################################################


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

    def get_id(self):
        return str(self.prog_id)

    def get_signature(self):
        return self.prog_signature


######################################################################## Program Property Computation ########################################################################


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



    
    def build_signature(self):
        if self.type == RefinedProg.RType.CHOICE:
            return "CH : {" + ",".join(choice_p.build_signature() for choice_p in self.get_choices()) + "}"
        elif self.type == RefinedProg.RType.REPEAT:
            return "RP : (" + self.get_repeat().build_signature() + ")"
        elif self.type == RefinedProg.RType.SEQ:
            return "SEQ : (" + ",".join(seq_prog.build_signature() for seq_prog in self.get_seqs()) + ")"
        elif self.type == RefinedProg.RType.TP:
            return str(self.prog)

    
    def pretty_print(self):
        print(self.get_signature())
    



class ProgramRefine():
    # Input: Abstract Transition Graph, 
    # Compute: refined Program with RefinedProg.RType

    def __init__(self, transition_graph) -> None:
        self.transition_graph = transition_graph
        self.translated_prog = RefinedProg()
        self.refined_prog = RefinedProg()
        self.loop_points = set()
        self.transition_paths = []
        self.transition_edges = []
        pass

    def collect_loop_point(self):
         self.loop_points = set(filter(lambda p : p, [t[0] if t[1][0].dc_type == DifferenceConstraint.DCType.WHILE else None for t in self.transition_graph.transitions]))
    
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
                                    # print("THE NEW CREATED SEQ: ", new_seq.get_signature())
                                    updated_working.append(new_seq)
                                    pop_set.add(postfix_prog)
            ############## Add The Unchanged Programs From Old Working List Into The New Working List #################### 
            for prog in working:
                if prog not in pop_set:
                    updated_working.append(prog)
            
            # print("THE UPDATED WORKING LIST: {}".format(list(map(lambda prog: prog.get_signature(), updated_working))))
            if working == updated_working:
                working = updated_working
                break
            working = updated_working
            working.sort(key=lambda prog: (prog.start_point, prog.end_point))
        print("THE TRANSLATED PROGRAM: ", working[-1].get_signature())
        return working[-1]



    def program_refine(self):
        self.collect_loop_point()
        print("LOOP POINTS: ", self.loop_points)
        self.build_transition_path()
        print("THE SIMPLE TRANSITION PATHS :", self.transition_paths)
        self.translated_prog = self.build_program()
        self.refined_prog = self.optimal_program_refine(self.translated_prog)
        print("REFINED PROGRAM : {}".format(self.refined_prog.get_signature()))
        return self.refined_prog

    def get_translated_prog(self):
        print("THE TRANSLATED PROGRAM: ", self.translated_prog.get_signature())
        return self.translated_prog

    
    def get_refined_prog(self):
        print("REFINED PROGRAM : {}".format(self.refined_prog.get_signature()))
        return self.refined_prog

    
    def optimal_program_refine(self, prog):
        def paths_refine(loop_paths):
            return loop_paths
        if prog.type == RefinedProg.RType.CHOICE:
            return RefinedProg(RefinedProg.RType.CHOICE, paths_refine(prog.get_choices()), None, prog.start_point, prog.end_point)
        elif prog.type == RefinedProg.RType.REPEAT:
            return RefinedProg(RefinedProg.RType.REPEAT, self.optimal_program_refine(prog.get_repeat()), prog.start_point, prog.start_point, prog.end_point)
        elif prog.type == RefinedProg.RType.SEQ:
            return RefinedProg(RefinedProg.RType.SEQ, [self.optimal_program_refine(p) for p in prog.get_seqs()], None, prog.start_point, prog.end_point)
        elif prog.type == RefinedProg.RType.TP:
            return prog

