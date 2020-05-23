T = int(input())
for i in range(T):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a = sorted(a)
    b = sorted(b)
    s = 0
    while s < k:
        if a[s] < b[len(b) - 1 - s]:
            a[s] = b[len(b) - 1 - s]
        s += 1
    c = 0
    for j in range(len(a)):
        c += a[j]
    print(c)