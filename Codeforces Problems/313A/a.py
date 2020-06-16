n = str(input())
o1 = int(n[0:len(n) - 1])
o2 = int(n[0:len(n) - 2] + n[len(n) - 1])
n = int(n)
if n > 0:
    print(n)
else:
    print(max(o1, o2))