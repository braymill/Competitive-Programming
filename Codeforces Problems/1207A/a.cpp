#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        b /= 2;
        if (b == 0){
            cout << 0 << "\n";
        } else {
            int o;
            if (b >= p + f){
                o = p * h + f * c;
            } else {
                if (h > c){
                    int n = min(p, b);
                    o = n * h;
                    b -= n;
                    o += min(b, f) * c;
                } else {
                    int n = min(f, b);
                    o = n * c;
                    b -= n;
                    o += min(b, p) * h;
                }
            }
            cout << o << "\n";
        }
    }
}