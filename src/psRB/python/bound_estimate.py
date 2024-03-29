from collections import defaultdict
import time
from abstract_transition_graph import TransitionGraph
from ranking_and_transition_bound import TransitionBound
from pathsensitive_rechability_bound import PathSensitiveReachabilityBound
from symbolic_expression import SymbolicExpression, SymbolicConst
from data_controlflow_graph import DCFGraph
from program_refine import ProgramRefine

class BoundEstimate():
    def __init__(self) -> None:
        pass


    # @staticmethod
    class ProgramBasedDependencyGraphWeightsEstimation():
        def __init__(self, graph = None, transition_graph = None) -> None:
            self.dcf_graph = graph if graph else DCFGraph()
            self.transition_graph = transition_graph if transition_graph else TransitionGraph()
            self.reachability_bound = defaultdict(SymbolicExpression)

        def psRB_estimation(self):
            # Path-Insensitive Version:
            # self.reachability_bound = TransitionBound(self.transition_graph).compute_transition_bounds()

            # # Path-Sensitive Version:
            Bounder, refiner = PathSensitiveReachabilityBound(self.transition_graph), ProgramRefine(self.transition_graph)
            refiner.program_refine()
            Bounder.compute_psRB(refiner.get_refined_prog())
            Bounder.print_transition_path_psRB()
            Bounder.print_program_point_psRB()
            return

        def dcf_graph_weights_estimate(self):
            self.dcf_graph.weights = [SymbolicExpression()]*self.dcf_graph.get_vertice_num()
            for (t_index, b) in (self.reachability_bound.items()):
                transition = self.transition_graph.transitions[t_index]
                for var_vertex in transition[3] :
                    print("TRANSITION {} HAS BOUND {}".format(transition, b))
                    self.dcf_graph.weights[var_vertex] = self.dcf_graph.weights[var_vertex] + b


        def dcf_graph_weight_estimate_noloop(self):
            for i in range(self.dcf_graph.get_vertice_num()):
                self.dcf_graph.weights[i] = SymbolicExpression(SymbolicConst(1))


    @staticmethod
    def bound_estimate(dcf_graph = None, abs_transition_graph = None):
        start_time = time.time()
        BoundEstimate.ProgramBasedDependencyGraphWeightsEstimation(dcf_graph, abs_transition_graph).psRB_estimation()
