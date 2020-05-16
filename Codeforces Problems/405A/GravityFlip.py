#python 2 implementation

def main():
    cases = int(input())
    list = []
    line = str(raw_input())
    idx = 0
    list = line.split(' ')
    newlist = []
    for s in list:
        newlist.append(int(s))
    newlist = sorted(newlist)
    for i in newlist:
        print(str(i)),
        
main() 