T = int(input())
for a in range(1, T+1):
    l, k = map(int, input().split())
    lst = list(map(int, input().split()))
    lst = sorted(lst)
    count = 0
    val = 0
    i = 0
    while val < k and i < len(lst):
        if val + lst[i] <= k:
            count += 1
            val += lst[i]
            i += 1
        else:
            break
    print('Case #' + str(a) + ': ' + str(count))