#include <iostream>
using namespace std;

// number theory problem

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
        int o = a % b != 0 ? b - a % b : 0;
        cout << o << "\n";
    }
}