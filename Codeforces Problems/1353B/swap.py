T = int(input())
for i in range(T):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a = sorted(a)
    b = sorted(b)
    s = 0
    while s < k:
        bidx = len(b) - 1 - s
        if a[s] < b[bidx]:
            a[s] = b[bidx]
        s += 1
    c = 0
    for j in range(len(a)):
        c += a[j]
    print(c)