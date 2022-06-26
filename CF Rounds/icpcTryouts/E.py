from cmath import pi
import math

t = int(input())
for i in range(t):
    n = int(input())
    sides = 2 * n
    angle = pi/sides
    print(2 * 0.5/math.tan(angle))
