leng = int(input())
lst = list(map(int, input().split()))
used = [False] * leng
lst1 = []
lst2 = []
lst3 = []
p1 = 1
p2 = 1
p3 = 1

# lst1 = neg product
# lst2 = pos product
# lst3 = zero product

for i in range(len(lst)):
    cur = lst[i]
    if cur < 0:
        if p2 < 0:
            lst2.append(cur)
            p2 *= cur
            used[i] = True
        elif p1 > 0:
            lst1.append(cur)
            p1 *= cur
            used[i] = True
    elif cur > 0:
        if p1 < 0 and len(lst2) != 0:
            lst1.append(cur)
            p1 *= cur
            used[i] = True
        elif p2 > 0:
            lst2.append(cur)
            p2 *= cur
            used[i] = True
    else:
        lst3.append(cur)
        used[i] = True
        p3 *= cur

# catch any that didn't fit cases first time around
for i in range(len(lst)):
    if (not(used[i])):
        cur = lst[i]
        if len(lst1) == 0:
            lst1.append(lst[i])
            p1 *= cur
        elif len(lst2) == 0:
            lst2.append(lst[i])
            p2 *= cur
        elif len(lst3) == 0:
            lst3.append(lst[i])
            p3 *= cur
        elif lst[i] < 0:
            if p2 < 0:
                lst2.append(lst[i])
                p2 *= cur
            else:
                lst3.append(lst[i])
        else:
            lst3.append(lst[i])

print(str(len(lst1)), end = ' ')
for i in range(len(lst1)):
    print(str(lst1[i]), end = ' ')
print()
print(str(len(lst2)), end = ' ')
for i in range(len(lst2)):
    print(str(lst2[i]), end = ' ')
print()
print(str(len(lst3)), end = ' ')
for i in range(len(lst3)):
    print(str(lst3[i]), end = ' ')
print()