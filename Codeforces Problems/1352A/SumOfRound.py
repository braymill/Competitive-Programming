# python implementation - uses less memory and is faster

def main():
    cases = input()
    for i in range(cases):
        curr = input()
        if (curr > 0):
            places = [False, False, False, False]
            s = str(curr)
            count = 0
            a = len(s) - 1
            while (a >= 0):
                if (s[a] != '0'):
                    places[a] = True
                    count += 1
                a -= 1
            if (count <= 1):
                print(1)
                print(s)
            else:
                print(count)
                a = len(s) - 1
                toprint = ""
                while (a >= 0):
                    if (places[a]):
                        digit = int(s[a])
                        if (digit != 0):
                            toprint += str(digit * (10 ** (len(s) - a - 1))) + " "
                    a -= 1
                print(toprint)
main()