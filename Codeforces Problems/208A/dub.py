l = list(map(str, input().split('WUB')))
ans = ''
for i in range(len(l)):
    if l[i] != '':
        ans += l[i] + ' '
print(ans)
