#include <iostream>
using namespace std;

// number theory problem

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n % 2 == 0){
            cout << n / 2 << "\n";
        } else {
            cout << (n - 1) / 2 << "\n";
        }
    }
}