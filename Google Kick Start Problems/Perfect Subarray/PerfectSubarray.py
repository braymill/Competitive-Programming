import math

# can fix TLE with python implementation?

T = int(input())
for i in range(1, T+1):
    l = int(input())
    arr = list(map(float, input().split()))
    if l == 1:
        num = arr[0]
        if num >= 0:
            rt = math.sqrt(num)
            if rt == int(rt):
                print(f'Case #{i}: 1')
        else:
            print(f'Case #{i}: 0')  
    else:
        total = 0
        for ptr1 in range(0, len(arr)):
            sum = arr[ptr1]
            for ptr2 in range(ptr1, len(arr)):
                if ptr2 == ptr1:
                    if sum >= 0:
                        num = math.sqrt(sum)
                    else:
                        sum = -1
                else:
                    sum += arr[ptr2]
                    if sum >= 0:
                        num = math.sqrt(sum)
                    else:
                        sum = -1
                if sum != -1 and num == int(num):
                    total += 1
        print(f'Case #{i}: {total}')

