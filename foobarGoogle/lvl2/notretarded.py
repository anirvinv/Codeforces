def find_parent_node(h, label):
    if label >= 2**h - 1:
        return -1

    found = False
    max_nodes = 2**h - 1
    current = max_nodes
    left = current//2
    right = current - 1
    right_subtree_size = max_nodes//2

    while not found and max_nodes > 0:
        max_nodes //= 2
        right_subtree_size //= 2
        if label == left or label == right:
            found = True
        elif label > left:
            current = right
            right = current - 1
            left = right - right_subtree_size
        else:
            current = left
            right = current - 1
            left = right - right_subtree_size
    return current


def solution(h, q):
    result = []
    for val in q:
        result += [find_parent_node(h, val)]
    return result


print(solution(5, [19, 14, 28]))
print(solution(3, [7, 3, 5, 1]))
