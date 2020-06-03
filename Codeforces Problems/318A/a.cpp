#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;
    ll idx = 0;
    ll odd = 0;
    while (idx < k){
        if (odd == 0){
            odd = 1;
        } else {
            odd += 2;
        }
        idx++;
    }

}