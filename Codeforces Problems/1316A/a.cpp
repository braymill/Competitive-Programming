#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, m;
        cin >> n >> m;
        int s = 0;
        for (int j = 0; j < n; j++){
            int c;
            cin >> c;
            s += c;
        }
        cout << min(m, s) << "\n";
    }
}