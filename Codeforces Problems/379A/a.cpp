#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    double t = a;
    while (a > 1){
        a /= b;
        // cout << a << "\n";
        t += a;
    }
    cout << trunc(t);
}