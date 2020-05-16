# simple pattern
# answer is 2 x (2^n/2 - 1)

T = int(input())
for i in range(T):
    n = float(input())
    e = n / 2
    c = 2 * (2 ** e - 1)
    print(int(c))
    
