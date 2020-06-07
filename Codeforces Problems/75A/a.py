a = int(input())
b = int(input())
c = a + b
awo = ''
bwo = ''
cwo = ''
astr = str(a)
bstr = str(b)
cstr = str(c)
for i in range(len(astr)):
    if astr[i] != '0':
        awo += astr[i]
for i in range(len(bstr)):
    if bstr[i] != '0':
        bwo += bstr[i]
for i in range(len(cstr)):
    if cstr[i] != '0':
        cwo += cstr[i]
aiwo = int(awo)
biwo = int(bwo)
ciwo = int(cwo)
print('YES' if c == a + b and aiwo + biwo == ciwo else 'NO')
