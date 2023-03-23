from abstract_transition_graph import TransitionGraph, DifferenceConstraint
from data_controlflow_graph import DCFGraph
from symbolic_expression import SymbolicExpression, SymbolicConst
import argparse

class GraphParser(argparse.ArgumentParser):
    def __init__(self, program_name = None, abscf_graph = None) -> None:
        self.program_name = program_name
        self.abs_cfg_file = abscf_graph

    def weight_parse(self):
        with open(self.dcfg_file, "r") as weightdata:
            return [int(l) if isinstance(l, int) else l.strip("\n") for l in weightdata.readlines()]

    def dcfg_parse(self):
        with open(self.dcfg_file, "r") as graphdata:
            n = int(graphdata.readline())
            query = [int(q) for q in graphdata.readline().strip("\n").split(",")[:-1]]
            edges = [([int(v) for v in e.split(",")]) for e in graphdata.readline().split(";")[:-1]]
            print("The Input DCFG: ", n, query, edges)
            return  DCFGraph(edges, None, query)
            weights_line = graphdata.readline()
            if weights_line:
                weights = [SymbolicExpression(SymbolicConst(l)) for l in weights_line.strip("\n").split(",")]
                print("The Input DCFG: ", n, query, edges, weights)
                return  DCFGraph(edges, weights, query)               
            else:
                print("The Input DCFG: ", n, query, edges)
                return  DCFGraph(edges, None, query)

    def abscfg_parse(self):
        with open(self.abs_cfg_file, "r") as graphdata:
            n = int( graphdata.readline())
            edges = [[(n - 1) if int(v) == -1 else int(v) for v in e.split(",")] for e in graphdata.readline().split(";")[:-1]]
            transitions = []
            for l in graphdata.readlines():
                l1, dc, l2, v = l.split(";")               
                if dc == "":
                    dc_set = []
                    v_set = [int(v)]
                else:
                    v_set = [int(v)]
                    (varname_or_bexpre, avar, c, ctype) = dc.split(",")
                    dc_type = DifferenceConstraint.DCType.RESET if ctype == "RESET" else DifferenceConstraint.DCType.INC if ctype == "INC" else DifferenceConstraint.DCType.DEC if ctype == "DEC" else DifferenceConstraint.DCType.WHILE if varname_or_bexpre.startswith("WHILE:") else DifferenceConstraint.DCType.IF
                    avar = None if avar == "" else avar
                    c =  None if c == "" else int(c) if isinstance(c, int) else c
                    dc_set = [DifferenceConstraint(varname_or_bexpre, avar, c, dc_type)]
                transitions.append((int(l1), dc_set, int(l2), v_set))
            transitions.sort(key=lambda y: y[0]) 
            edges.sort(key=lambda y: y[0])   
            print("The Input ABS Transition Graph: ", n, edges, [(t[0], t[1][0].pretty_print(), t[2], t[3]) for t in transitions])
            return TransitionGraph(edges, transitions, n)

        pass