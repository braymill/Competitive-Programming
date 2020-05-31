l = list(map(int, input().split('+')))
l = sorted(l)
i = 0
while i < len(l):
    print(l[i], end='')
    if i != len(l) - 1:
        print('+', end='')
    i += 1