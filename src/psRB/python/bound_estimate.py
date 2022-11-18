from collections import defaultdict
import time
from abstract_transition_graph import TransitionGraph
from bound_infer import TransitionBound
from adapt_lib import AdaptType, Graph
from program_refine import ProgramRefine
from rechability_bound_pathsensitive import PathSensitiveReachabilityBound

class BoundEstimate():
    def __init__(self) -> None:
        pass


    # @staticmethod
    class ProgramBasedDependencyGraphWeightsEstimation():
        def __init__(self, graph=Graph(), transition_graph=TransitionGraph()) -> None:
            self.graph = graph
            self.transition_graph = transition_graph
            self.reachability_bound = defaultdict(AdaptType)

        def reachability_bound_estimation(self):
            # Path-Insensitive Version:
            # self.reachability_bound = TransitionBound(self.transition_graph).compute_transition_bounds()

            # # Path-Sensitive Version:
            reachability_bound_path = PathSensitiveReachabilityBound(self.transition_graph).compute_psRB(ProgramRefine(self.transition_graph).program_refine())
            print("TRANSITION BOUND FOR PATHS ARE {}".format(reachability_bound_path))
            for transition_path, bound in reachability_bound_path.items():
                for transition_id in [int(id) for id in (transition_path[1:-1].split(", "))]:
                    self.reachability_bound[transition_id] = self.reachability_bound[transition_id] + AdaptType(bound)
            return

        def vertex_weights_estimate(self):
            self.graph.weights = [AdaptType(0)]*self.graph.get_vertice_num()
            for (t_index, b) in (self.reachability_bound.items()):
                transition = self.transition_graph.transitions[t_index]
                for var_vertex in transition[3] :
                    print("TRANSITION {} HAS BOUND {}".format(transition, b))
                    self.graph.weights[var_vertex] = self.graph.weights[var_vertex] + b
        

        def get_vertex_weights(self):
            return [w.value for w in self.graph.weights]
        
        def print_vertex_weights(self):
            for (_, dc_set, _, var_set) in self.transition_graph.transitions:
                for var in var_set:
                    print( "weight for Variable or Bool guard: " 
                        + str(dc_set[0].get_var() if dc_set[0].get_var() else dc_set[0].dc_bexpr) + " of label " 
                        + str(var) + " is: " + str(self.graph.weights[var].value))
                                                    
        def weight_estimate(self):
            self.reachability_bound_estimation()
            self.vertex_weights_estimate()


        def weight_estimate2(self):
            for i in range(self.graph.get_vertice_num()):
                self.graph.weights[i] = AdaptType(1)

        def print_weights(self):
            self.print_vertex_weights()


    @staticmethod
    def bound_estimate(dcf_graph, abs_transition_graph):
        start_time = time.time()

        weight_infer = BoundEstimate.ProgramBasedDependencyGraphWeightsEstimation(dcf_graph, abs_transition_graph)
        if dcf_graph.weights is None:
            weight_infer.weight_estimate()
            weight_infer.print_weights()
            print("--- REACHABILITY BOUND COMPUTATION TIME: %s seconds ---" % (time.time() - start_time))
        else:
            print("--- REACHABILITY BOUNDS ARE PARSED FROM FILE: %s seconds ---" % (time.time() - start_time))
