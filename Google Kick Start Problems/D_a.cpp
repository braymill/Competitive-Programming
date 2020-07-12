#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int q = 0; q < t; q++){
        int num = 0;
        int n;
        cin >> n;
        vector<int> v (n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int m = -1;
        for (int i = 0; i < n; i++){
            int c = v[i];
            if (c > m && (i == n - 1 || c > v[i + 1])){
                num++;
                m = c;
            }
            if (m == -1){
                m = v[0];
            }
        }
    cout << "Case #" << q + 1 << ": " << num << "\n";
    }
}