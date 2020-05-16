cases = int(input())
for i in range(1, cases + 1):
    leng = input()
    l = list(map(int, input().split()))
    c = 0
    for j in range(1, len(l) - 1):
        if (l[j] > l[j-1] and l[j] > l[j+1]):
            c += 1
    print(f'Case #{i}: {c}')