import math

lst = list(map(int, input().split()))
check = 0
ans = math.floor((lst[0] + lst[1] + lst[2]) / 3)
for i in range(len(lst)):
    if ans > lst[i]:
        check += 1
if check >= 2:
    lst = sorted(lst)
    print(str(lst[1]))
else:
    print(ans)
