user = str(input())
lst = [False] * 26
for i in range(len(user)):
    lst[ord(user[i]) - ord('a')] = True
count = 0
for i in range(len(lst)):
    if (lst[i]):
        count += 1
print('IGNORE HIM!' if count % 2 == 1 else 'CHAT WITH HER!')