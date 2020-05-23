# clever series question

n = int(input())
if n % 2 == 0:
    print(str(int((n / 2))))
else:
    print(-1 * (n // 2) - 1)