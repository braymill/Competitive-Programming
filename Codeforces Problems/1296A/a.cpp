#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int s = 0;
        int o = 0;
        int e = 0;
        for (int i = 0; i < n; i++){
            int c;
            cin >> c;
            s += c;
            if (c % 2 == 1){
                o++;
            } else {
                e++;
            }
        }
        if (s % 2 == 1 || (s % 2 == 0 && o >= 1 && e >= 1)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}