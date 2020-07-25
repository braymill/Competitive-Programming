#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int time = 0;
    int timewithout = 0;
    int i = 0;
    while (i < n && time < 1800 && timewithout < 60){
        int clen;
        cin >> clen;
        bool isdog;
        char cur;
        cin >> cur;
        isdog = cur == 'Y';
        if (isdog){
            time += clen;
        } else {
            int actuallength = min(clen, 5);
            time += actuallength;
            timewithout += actuallength;
        }
        i++;
    }
    if (timewithout >= 60){
        time -= timewithout - 60;
    }
    cout << min(1800, time);
    return 0;
}