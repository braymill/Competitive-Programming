#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x, y, n;
        cin >> x >> y >> n;
        int c = n % x;
        int d;
        if (c < y){
            d = (x - y) + c;
        } else {
            d = c - y;
        }
        cout << n - d << "\n";
    }
}