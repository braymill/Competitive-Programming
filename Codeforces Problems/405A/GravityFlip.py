l = int(input())
li = list(map(int, input().split()))
li = sorted(li)
for i in li:
    print(f'{i}', end=' ')
