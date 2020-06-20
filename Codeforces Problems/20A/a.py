s = str(input())
l = list(s.split('/'))
o = ''
# print(l)
for i in range(len(l)):
    if l[i] != '':
        o += '/' + l[i]
# edge case exception
print(o if o != '' else '/')