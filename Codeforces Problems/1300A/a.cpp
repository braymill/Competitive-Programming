#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        int s = 0;
        int p = 1;
        int z = 0;
        for (int j = 0; j < n; j++){
            int cur;
            cin >> cur;
            if (cur != 0){
                s += cur;
                p *= cur;
            } else {
                z++;
            }
        }
        if (s == 0 || z > 0){
            if (s == -z){
                cout << z + 1 << "\n";
            } else {
                cout << max(1, z) << "\n";
            }
        } else {
            cout << 0 << "\n";
        }
    }
}