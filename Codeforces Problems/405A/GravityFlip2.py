#python 3 implementation with better input functionality
from six.moves import input

def main():
    cases = int(input())
    list = []
    line = str(input())
    idx = 0
    list = line.split(' ')
    newlist = []
    for s in list:
        newlist.append(int(s))
    newlist = sorted(newlist)
    for i in newlist:
        print(str(i)),
        
main() 