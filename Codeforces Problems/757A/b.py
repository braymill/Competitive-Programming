s = str(input())
s = sorted(s)
c = 0
done = False
let = ['B', 'u', 'l', 'b', 'a', 's', 'a', 'u', 'r']
l = ['B', 'u', 'l', 'b', 'a', 's', 'r']
n = [0.0] * 7
for i in range(len(s)):
    cur = s[i]
    if cur == 'B':
        n[0] += 1
    elif cur == 'u':
        n[1] += 1
    elif cur == 'l':
        n[2] += 1
    elif cur == 'b':
        n[3] += 1
    elif cur == 'a':
        n[4] += 1
    elif cur == 's':
        n[5] += 1
    elif cur == 'r':
        n[6] += 1
d = {'B': n[0], 'u': n[1], 'l': n[2], 'b': n[3], 'a': n[4], 's': n[5], 'r': n[6]}
i = 0
while not(done):
    a = let[i]
    nc = d.get(let[i])
    if nc > 0:
        u = {a: nc - 1}
        d.update(u)
        if i == 8:
            c += 1
            i = 0
        else:
            i += 1
    else:
        done = True  
print(c)