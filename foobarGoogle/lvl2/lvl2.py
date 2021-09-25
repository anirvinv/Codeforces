def solution(tree_height, lst):
    class Node:
        def __init__(self):
            self.value = None
            self.root = None
            self.left = None
            self.right = None

        def __str__(self):
            return f"{self.value}"

    class Tree:
        def __init__(self, root):
            self.root = root
            self.global_count = 0
            self.levels = {}

        def postorder_labeling(self, node):
            if not node:
                return
            else:
                self.postorder_labeling(node.left)
                self.postorder_labeling(node.right)
                self.global_count += 1
                node.value = self.global_count

        def postorder_depthlabel(self, node, depth):
            if not node:
                return
            else:
                depth += 1
                self.postorder_depthlabel(node.left, depth)
                self.postorder_depthlabel(node.right, depth)
                if not depth in self.levels.keys():
                    self.levels[depth] = []
                self.levels[depth] += [str(node)]
                # print(node, end=" ")

    def perfectTree(node, depth, max_depth):
        if depth > max_depth - 1:
            return
        node.right = Node()
        node.left = Node()
        depth += 1
        perfectTree(node.right, depth, max_depth)
        perfectTree(node.left, depth, max_depth)

    tree = Tree(Node())

    perfectTree(tree.root, 1, tree_height)

    tree.postorder_labeling(tree.root)
    tree.postorder_depthlabel(tree.root, 0)

    levels = tree.levels

    def root(number, levels):
        depth = 0
        index = 0
        for d, l in levels.items():
            if str(number) in l:
                index = l.index(str(number))
                depth = d
                break

        if (d - 1) in levels.keys():
            index //= 2
            return levels[d-1][index]
        else:
            return -1

    result = []
    for i, val in enumerate(lst):
        if i == len(lst) - 1:
            result += [int(root(str(val), levels))]
        else:
            result += [int(root(str(val), levels))]
    return result


print(solution(30, [19, 14, 28]))
