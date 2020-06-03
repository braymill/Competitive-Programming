#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n, x;
    int mxn = 1000;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a[1000];
        int sum = 0;
        cin >> n >> x;
        int odd, even = 0;
        for (int j = 0; j < n; j++){
            int cur;
            cin >> cur;
            a[j] = cur;
            if (cur % 2 == 0){
                even++;
            } else {
                odd++;
            }
            sum += cur;
        }
        if (n == x){
            if (sum % 2 == 1){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            if (odd >= x && even >= 1){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
}