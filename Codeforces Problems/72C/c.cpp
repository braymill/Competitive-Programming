#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int e = 0;
    int o = 0;
    // x is a divisor of itself, loop won't check it so need to check here
    if (x % 2 == 0){
        e++;
    } else {
        o++;
    }
    for (int i = 1; i <= sqrt(x); i++){
        if (x % i == 0){
            if (i % 2 == 0){
                e++;
            } else {
                o++;
            }
        }
    }
    if (e == o){
        cout << "yes";
    } else {
        cout << "no";
    }
}