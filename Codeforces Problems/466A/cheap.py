import math

n, m, a, b = map(int, input().split())
unit1 = a
unit2 = b / m
option1 = n * unit1 
option2 = n // m * b + b
option3 = (n // m) * b + (n % m) * a
print(min(option1, min(option2, option3)))