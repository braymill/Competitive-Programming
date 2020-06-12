#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll k, n, w;
    cin >> k >> n >> w;
    ll t = k * ((w * (w + 1)) / 2);
    ll o = t - n > 0 ? t - n : 0;
    cout << o;
}