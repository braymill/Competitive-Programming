#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;
    while (k--){
        if (n % 10 == 0){
            n /= 10;
        } else {
            n--;
        }
    }
    cout << n;
}