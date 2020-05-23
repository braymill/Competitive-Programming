import math

class sol:
    def __init__(self):
        return

    def find(self, num):
        r = -1
        savenum = num
        # know that num is not divisible by 2
        i = 3
        # only need to go up to sqrt(num)
        while (i * i <= num):
            if num % i == 0:
                r = i
                break
            i += 1
        if r == -1:
            # smallest divisor besides 1 is itself
            r = savenum
        return r
                    

T = int(input())
x = sol()
for i in range(T):
    n, k = map(int, input().split())
    c = n
    if c % 2 == 0:
        # 2 will always be the smallest divisor in this case
        print(str(c + (2 * k)))
    else:
        r = x.find(c)
        print(c + 2 * (k - 1) + r)
    