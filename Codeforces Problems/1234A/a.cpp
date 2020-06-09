#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int n;
        cin >> n;
        double a = 0;
        for (int i = 0; i < n; i++){
            int c;
            cin >> c;
            a += c;
        }
        cout << (int) ceil(a / n) << "\n";
    }
}