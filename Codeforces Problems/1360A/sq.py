import math

T = int(input())
for i in range(T):
    a, b = map(int, input().split())
    area = 2 * a * b
    out = 2
    while out * out < area or (out < 2 * a or out < 2 * b):
        out += 1
    if a == 1 and b != 1:
        print(b * b)
    elif a != 1 and b == 1:
        print(a * a)
    else:
        print(out * out)
    