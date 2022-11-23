from collections import defaultdict
import time
from abstract_transition_graph import TransitionGraph
from bound_infer import TransitionBound
from symbolic_expression import SymbolicExpression
from data_controlflow_graph import Graph
from program_refine import ProgramRefine
from rechability_bound_pathsensitive import PathSensitiveReachabilityBound

class BoundEstimate():
    def __init__(self) -> None:
        pass


    # @staticmethod
    class ProgramBasedDependencyGraphWeightsEstimation():
        def __init__(self, graph=Graph(), transition_graph=TransitionGraph()) -> None:
            self.dcf_graph = graph
            self.transition_graph = transition_graph
            self.reachability_bound = defaultdict(SymbolicExpression)

        def psRB_estimation(self):
            # Path-Insensitive Version:
            # self.reachability_bound = TransitionBound(self.transition_graph).compute_transition_bounds()

            # # Path-Sensitive Version:
            Bounder = PathSensitiveReachabilityBound(self.transition_graph)
            Bounder.compute_psRB(ProgramRefine(self.transition_graph).program_refine())
            Bounder.print_transition_path_psRB()
            Bounder.print_program_point_psRB()
            for transition_id, bound in enumerate(Bounder.get_transition_psRB()):
                self.reachability_bound[transition_id] = self.reachability_bound[transition_id] + SymbolicExpression(bound)
            return

        def dcf_graph_weights_estimate(self):
            self.dcf_graph.weights = [SymbolicExpression(0)]*self.dcf_graph.get_vertice_num()
            for (t_index, b) in (self.reachability_bound.items()):
                transition = self.transition_graph.transitions[t_index]
                for var_vertex in transition[3] :
                    print("TRANSITION {} HAS BOUND {}".format(transition, b))
                    self.dcf_graph.weights[var_vertex] = self.dcf_graph.weights[var_vertex] + b


        def dcf_graph_weight_estimate_noloop(self):
            for i in range(self.dcf_graph.get_vertice_num()):
                self.dcf_graph.weights[i] = SymbolicExpression(1)


    @staticmethod
    def bound_estimate(dcf_graph, abs_transition_graph):
        start_time = time.time()
        if dcf_graph.weights is None:
            BoundEstimate.ProgramBasedDependencyGraphWeightsEstimation(dcf_graph, abs_transition_graph).psRB_estimation()
            print("--- REACHABILITY BOUND COMPUTATION TIME: %s seconds ---" % (time.time() - start_time))
        else:
            print("--- REACHABILITY BOUNDS ARE PARSED FROM FILE: %s seconds ---" % (time.time() - start_time))
