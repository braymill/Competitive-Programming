T = int(input())
for i in range(T):
    s = str(input())
    if len(s) <= 3:
        print(0 if s != '101' and s != '010' else 1)
    else:
        lst = list(s.split('101'))
        lst2 = list(s.split('010'))
        print(lst)
        print(lst2)