from bound_estimate import BoundEstimate
from graph_parse import GraphParser
import time


class Runner:
    def __init__(self) -> None:
        # self.filename = filename
        pass
    
    def main(self):
        graph_parser = GraphParser()
        dcf_graph = graph_parser.dcfg_parse()
        abscf_graph = graph_parser.abscfg_parse()
        BoundEstimate.bound_estimate(dcf_graph, abscf_graph)

start_time = time.time()
runner = Runner()
runner.main()



