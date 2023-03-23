from bound_estimate import BoundEstimate
from graph_parse import GraphParser
import time
import argparse

class ArgParser(argparse.ArgumentParser):
        def __init__(self, example = None) -> None:
            super().__init__(description='Process the Abstract Control Flow Graph and Data Dependency Graph')
            self.add_argument('-d', '--dcfg',
            type=str, 
            default= "./dcfg/seq.br", 
            help='The input file name for the Data Control Flow Graph')

            self.add_argument('-a', '--abs_cfg',
            type=str, 
            default= "./abscfg/seq.br", 
            help='The input file name for the Abstract Control Flow Graph')


            self.add_argument('-w', '--weight',
            type=str, 
            default= "./weight/seq.br", 
            help='The input file name of the weight')


            self.add_argument('-e', '--example',
                type=str, 
                default= "./examples/seq.br", 
                help='The example  program name')

            self.add_argument('-p', '--program_name',
                type=str, 
                default= "./examples/seq.br", 
                help='The benchmark program name')


            self.add_argument('-v', '--version',
                type=int, 
                default= 0, 
                help='The alternative versions of the adaptfun')


            self.args = self.parse_args()
            self.program_name = self.args.example.split("/")[-1]



class PSRB:

    @staticmethod
    def psRB(program_name):
        print(program_name)
        abs_cfg_file = "./abscfg/" + program_name
        graph_parser = GraphParser(program_name, abs_cfg_file)
        abscf_graph = graph_parser.abscfg_parse()
        start_time = time.time()
        BoundEstimate.bound_estimate(abs_transition_graph = abscf_graph)
        print("--- REACHABILITY BOUND COMPUTATION TIME: %s seconds ---" % (time.time() - start_time))



    def __init__(self) -> None:
        # self.filename = filename
        pass
    
    def main(self):
        arg_parser = ArgParser()
        print(arg_parser.program_name)
        PSRB.psRB(arg_parser.program_name)

start_time = time.time()
psRB = PSRB()
psRB.main()



