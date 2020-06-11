#include <iostream>
#include <math.h>
using namespace std;

// number theory problem

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
        int d = abs(a - b);
        int o;
        if (d == 0){
            o = 0;
        } else {
            if (a > b){
                o = d % 2 == 0 ? 1 : 2;
            } else {
                o = d % 2 == 1 ? 1 : 2;
            }
        }
        cout << o << "\n";
    }
}