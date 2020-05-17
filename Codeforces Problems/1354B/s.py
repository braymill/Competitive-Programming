# didn't finish

T = int(input())
for i in range(T):
    s = str(input())
    idx = 0
    seen1 = False
    seen2 = False
    seen3 = False
    leng = 0
    count = 1000000
    def isvalid(idx):
        return s[idx] == '1' or s[idx] == '2' or s[idx] == '3'
    while not(isvalid(idx)):
        idx += 1
    # got to start of string
    # want to also ignore invalid chars at the end of the string
    while idx < len(s) and not(isvalid(idx)):
        curr = s[idx]
        if not(seen1) and curr == '1':
            seen1 = True
            leng += 1
        elif not(seen2) and curr == '2':
            seen1 = True
            leng += 1
        elif not(seen3) and curr == '3':
            seen1 = True
            leng += 1
        if seen1 and seen2 and seen3:
            if (leng < count and leng >= 3):
                count = leng
            else:
                leng = 0
                seen1 = False
                seen2 = False
                seen3 = False
        idx += 1

    print(f'{count}')
