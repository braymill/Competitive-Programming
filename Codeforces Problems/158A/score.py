l, k = map(int, input().split())
lst = list(map(int, input().split()))
score = lst[k-1]
c = 0
for i in range(l):
    if lst[i] > 0 and lst[i] >= score:
        c += 1
print(str(c))
