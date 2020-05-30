#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t, n, m, k;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> m >> k;
        if (m == 0){
            cout << 0 << "\n";
        } else {
            int c = n / k;
            int mx = min(c, m);
            // cout << m / mx << "\n";
            if (m / mx < 1){
                cout << mx << "\n";
            } else if (m / mx > 1){
                int out = (mx - m / mx) > 0 ? mx - (m / mx) : 0;
                cout << out << "\n";
            } else if (m / mx == 1) {
                cout << m << "\n";
            }
        }
    }
}