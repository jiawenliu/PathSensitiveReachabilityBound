import enum
from collections import defaultdict

class DifferenceConstraint:
    class DCType(enum.Enum):
        DEC = 1
        INC = 2
        RESET = 3
        ASUM = 4
        WHILE = 5
        IF = 6

    dc_type = 1
    def __init__(self, var_or_b = None, dc_var = None, dc_const = None, dc_type = None) -> None:
        if dc_type == self.DCType.WHILE or dc_type == self.DCType.IF:
            self.var = None
            self.dc_bexpr = var_or_b 
        else:
            self.var = var_or_b 
            self.dc_bexpr = None
        
        self.dc_var = dc_var
        self.dc_const = dc_const
        self.dc_type = dc_type

    def get_var(self):
        return self.var 

    def get_var_name(self):
        return self.var

    def get_reset_var(self):
        return self.dc_var 

    def is_reset(self):
        return self.dc_type == self.DCType.RESET
    
    def is_inc(self):
        return self.dc_type == self.DCType.INC

    def is_dec(self):
        return self.dc_type == self.DCType.DEC
    
    def is_guard(self):
        return self.dc_type == self.DCType.WHILE or self.dc_type == self.DCType.IF

    def is_while(self):
        return self.dc_type == self.DCType.WHILE
    
    def is_if(self):
        return self.dc_type == self.DCType.IF

    def get_const(self):
        return self.dc_const
    
    def get_guard_expr(self):
        return self.dc_bexpr.split(":")[1]


class DirectedGraph:
    def __init__(self, vertices_num = None, edges = None) -> None:
        self.edges = edges if edges else []
        self.vertices_num = vertices_num if vertices_num else 0 if not edges else max(list(map(lambda x : max(x), edges))) + 1
        self.graph = defaultdict(list)
        self.time = 0
        self.scc_ids = [-1] * (self.vertices_num)
        self.scc_cnt = -1
        self.edge_indices = defaultdict(int)
        self.build_edges()
        self.build_edge_indices()
        self.build_scc()


    def build_edges(self):
        for (u, v) in self.edges:
            self.graph[u].append(v)
    
    def build_edge_indices(self):
        for index, (u, v) in enumerate(self.edges):
            self.edge_indices[str(u) + "->" + str(v)] = index

    def search_path(self, st, dest):
        r = []
        self.build_edge_indices()
        visited = [0] * self.vertices_num
        def dfs(c, path):
            if c == dest:
                r.append(path)
                return 
            else:
                for next_v in self.graph[c]:
                    if not visited[next_v]:
                        visited[next_v] = 1
                        dfs(next_v, path + [self.edge_indices[str(c) + "->" + str(next_v)]])
                        visited[next_v] = 0
        dfs(st, [st])
        return r

    def in_scc(self, edge):
        return self.scc_ids[edge[0]] == self.scc_ids[edge[1]]
    
    def scc_dfs(self,u, low, disc, stackMember, st):

        # Initialize discovery time and low value
        disc[u] = self.time
        low[u] = self.time
        self.time += 1
        stackMember[u] = True
        st.append(u)

        # Go through all vertices adjacent to this
        for v in self.graph[u]:
            
            # If v is not visited yet, then recur for it
            if disc[v] == -1 :
            
                self.scc_dfs(v, low, disc, stackMember, st)

                # Check if the subtree rooted with v has a connection to
                # one of the ancestors of u
                # Case 1 (per above discussion on Disc and Low value)
                low[u] = min(low[u], low[v])
                        
            elif stackMember[v] == True:

                '''Update low value of 'u' only if 'v' is still in stack
                (i.e. it's a back edge, not cross edge).
                Case 2 (per above discussion on Disc and Low value) '''
                low[u] = min(low[u], disc[v])

        # head node found, pop the stack and print an SCC
        w = -1 #To store stack extracted vertices
        if low[u] == disc[u]:
            self.scc_cnt += 1
            while w != u:
                w = st.pop()
                # print (w, end=" ")
                self.scc_ids[w] = self.scc_cnt
                stackMember[w] = False
                
            # print()
   

    #The function to do DFS traversal.
    # It uses recursive scc_dfs()
    def build_scc(self):

        # Mark all the vertices as not visited
        # and Initialize parent and visited,
        # and ap(articulation point) arrays
        disc = [-1] * (self.vertices_num)
        low = [-1] * (self.vertices_num)
        stackMember = [False] * (self.vertices_num)
        st =[]
        

        # Call the recursive helper function
        # to find articulation points
        # in DFS tree rooted with vertex 'i'
        for i in range(self.vertices_num):
            if disc[i] == -1:
                self.scc_dfs(i, low, disc, stackMember, st)  
     


#TODO: build Base Father Graph Calss
#Inherit the Transition Graph and the Data-Flow Graph from the Command Graph Class
class TransitionGraph(DirectedGraph):
    # locations = [0, 1]
    def __init__(self,  edges = None, transitions = None, vertex_num = None ):
        super(TransitionGraph, self).__init__(vertex_num, edges)
        self.ctl_edges = edges if edges else []
        self.transitions = transitions if transitions else []
        self.transition_id = defaultdict(int)
        self.edge_to_transition_id = defaultdict(int)
        self.transition_num = len(self.transitions)
        for id, (l1,_,l2,_) in enumerate(self.transitions):
            l2 = vertex_num if l2 == -1 else l2
            self.edge_to_transition_id["{}->{}".format(l1,l2)] = id
        

    def transition_id_lookup(self, edge):
        return self.edge_to_transition_id[edge] if edge in self.edge_to_transition_id.keys() else -1







