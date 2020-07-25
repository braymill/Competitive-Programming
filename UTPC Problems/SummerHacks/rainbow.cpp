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
    string s;
    cin >> s;
    int r = 0;
    int g = 0;
    int y = 0;
    int b = 0;
    int p = 0;
    int o = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'R'){
            r++;
        } else if (s[i] == 'G'){
            g++;
        } else if (s[i] == 'Y'){
            y++;
        } else if (s[i] == 'B'){
            b++; 
        } else if (s[i] == 'O'){
            o++;
        }
        else {
            p++;
        }
    }
    int m = min({r, g, y, b, p, o});
    cout << m;
    int leftover = max(r - m, 0) + max(g - m, 0) + max(y - m, 0) + max(b - m, 0) + max(p - m, 0) + max(o - m, 0);
    if (m > 0){
        int space = 4*m;
        if (leftover <= space){
            cout << " " << 0;
        } else {
            cout << " " << leftover - space;
        }
    } else {
        cout << " " << n;
    }
    return 0;
}