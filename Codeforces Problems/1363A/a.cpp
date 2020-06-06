#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, x = 0;
        int sum = 0;
        cin >> n >> x;
        int odd, even = 0;
        for (int j = 0; j < n; j++){
            int cur = 0;
            cin >> cur;
            sum += cur;
            if (cur % 2 == 0){
                even++;
            } else {
                odd++;
            }
        }
        if (n == x){
            if (sum % 2 == 1){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            // x is even
            if (x % 2 == 0){
                if (even % 2 == 0 && odd % 2 == 1){
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            } else {
                if (odd >= 1 || (even % 2 == 0 && odd % 2 == 1)){
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            }
        }
    }
}