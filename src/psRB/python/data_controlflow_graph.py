from symbolic_expression import SymbolicExpression

class DCFGraph:
    def __init__(self, edges = None, weights = None, query = None):
        self.weights = weights
        self.query = query if query else [1, 1]
        self.edges = edges if edges else [(0, 1)]
        self.edge_weights = dict({str(u) + "->" + str(v) : SymbolicExpression() for (u, v) in self.edges})
    
    def get_vertice_num(self):
        return len(self.query)