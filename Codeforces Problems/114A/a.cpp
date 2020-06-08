#include <iostream>
#include <algorithm>
#include <cstdlib>
#define ll long long
using namespace std;

int main(){
    ll k;
    ll l;
    ll c = -1;
    cin >> k >> l;
    while (l % k == 0){
        l /= k;
        c++;
    }
    if (l == 1){
        cout << "YES\n" << c;
    } else {
        cout << "NO";
    }
}