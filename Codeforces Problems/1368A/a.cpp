#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b, n;
        cin >> a >> b >> n;
        int o = 0;
        if (a > b){
            int c = a;
            while (c <= n){
                if (o % 2 == 0){
                    b += a;
                    c = b;
                } else {
                    a += b;
                    c = a;
                }
                o++;
            }
        } else {
            int c = b;
            while (c <= n){
                if (o % 2 == 0){
                    a += b;
                    c = a;
                } else {
                    b += a;
                    c = b;
                }
                o++;
            }
        }
        cout << o << "\n";
    }
}