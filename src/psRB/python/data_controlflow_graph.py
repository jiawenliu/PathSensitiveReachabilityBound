from symbolic_expression import SymbolicExpression

class Graph:
    weights = [SymbolicExpression(1), SymbolicExpression(1)]
    query = [1, 1]
    edges = [(0, 1)]
    def __init__(self, edges = [(0, 1)], weights = None, query = [1, 1]):
        self.weights = weights 
        self.query = query
        self.edges = edges
        self.edge_weights = dict({str(u) + "->" + str(v) : SymbolicExpression(0) for (u, v) in edges})
    
    def get_vertice_num(self):
        return len(self.query)