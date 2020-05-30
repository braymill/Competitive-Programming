n, m, k = map(int, input().split())
lst = [1000001] * n
for i in range(n):
    r, c = map(int, input().split())
    if lst[r - 1] > c:
        lst[r - 1] = c
# thisset = {0}
# for j in range(len(lst)):
#     thisset.add(lst[j])
out = 0
for num in lst:
    out += num if num != 1000001 else 0
print(out if out <= k else k)