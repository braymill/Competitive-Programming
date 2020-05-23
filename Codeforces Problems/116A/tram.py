n = int(input())
mx = -1
cur = 0
for i in range(n):
    a, b = map(int, input().split())
    cur -= a
    cur += b
    if cur > mx:
        mx = cur
print(mx)