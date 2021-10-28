import itertools
from queue import Queue

class Graph:
    def __init__(self) -> None:
        self.nodes = set()
        self.adjlist = dict()
    
    def add_node(self, label):
        self.nodes.add(label)
        self.adjlist[label] = []

    def add_edge(self, lbl1, lbl2):
        self.adjlist[lbl1].append(lbl2)
    
    def __str__(self) -> str:
        return '\n'.join(
            [f'{key} -> {data}' for key, data in self.adjlist.items()]
        )

def depth_first_search(gr, start):
    stack = [start]
    visited = set()

    while len(stack) != 0:
        current_node = stack.pop()
        if current_node in visited:
            continue

        print(current_node, end=' -> ')
        visited.add(current_node)

        for neib in gr.adjlist.get(current_node, []):
            if neib not in visited:
                stack.append(neib)

def bredth_first_search(gr, start):
    q = Queue()
    q.put_nowait(start)
    visited = set()

    while not q.empty():
        current_node = q.get_nowait()
        if current_node in visited:
            continue

        print(current_node, end=' -> ')
        visited.add(current_node)

        for neib in gr.adjlist.get(current_node, []):
            if neib not in visited:
                q.put_nowait(neib)

# kstr = ['000', '001', '010', '100', '011', '101', '110', '111']
k = 3
reads = [''.join(item) for item in itertools.product('01', repeat=k)]
print(reads)

gr = Graph()
for item in reads:
    gr.add_node(item[:-1])
    gr.add_node(item[1:])

for item in reads:
    gr.add_edge(item[:-1], item[1:])

print(gr)

depth_first_search(gr, reads[0][:-1])
print('')
bredth_first_search(gr, reads[0][:-1])
