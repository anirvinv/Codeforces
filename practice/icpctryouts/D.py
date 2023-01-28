s = input().split(',')

k = []

for i in range(0, len(s) - 1, 2):
    k.append([s[i],int(s[i+1])])
class Node:
    def __init__(self, val) -> None:
        self.val = val
        self.children = []
        self.parent = None
        
    def __repr__(self):
        return f"{self.val}"
    
k = [Node(j) for j in k]

for i in range(len(k)):
    if k[i].val[1] != 0:
        for j in range(i+1, i + k[i].val[1]+1):
            k[i].children.append(k[j])
            k[j].parent = k[i]

parents = []
for node in k:
    if node.parent==None:
        parents.append(node)
        
def get_level(pnode, plevel):
    level_lst = []       
    def dfs(node, level):
        if level == plevel:
            level_lst.append(node)
        for child in node.children:
            dfs(child, level + 1)
    dfs(pnode, 0)

# What this is meant to do is go through each root node in the tree and create a list of depth n
# To get all the nodes of depth n, iterate through all parent nodes and get_level(n) and then combine the list
# Do this until the combination of get_level(n) is == [], which means the depth is 1 too much
            