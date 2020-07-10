n = int(input())
l = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
done = False
for i in range(len(l)):
    if n % l[i] == 0:
        done = True
        break
print('YES' if done else 'NO')