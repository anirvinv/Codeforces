def generateLists(height):
    levels = []
    for _ in range(height):
        levels += [[]]
    return levels


print(generateLists(5))
