import math

T = int(input())
for i in range(T):
    n, a, b = map(int, input().split())
    unit1 = a
    unit2 = b / 2
    if n % 2 == 0:
        if unit2 < unit1:
            print(str(int(n * unit2)))
        else:
            print(str(int(n * unit1)))
    else:
        if unit2 < unit1:
            r = n % 2
            ans = (n // 2) * b + r * a
            print(str(int(ans)))
        else:
            print(str(int(n * unit1)))