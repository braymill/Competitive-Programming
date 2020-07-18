#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 1; i <= n; i++){
            m[i] = -1;
        }
        vector<int> o (n);
        int idx = 0;
        int num = 0;
        for (int i = 0; i < 2 * n; i++){
            int c;
            cin >> c;
            if (m[c] == -1){
                o[idx] = c;
                m[c] = 0;
                idx++;
                num++;
            }
        }
        for (int i = 0; i < n; i++){
            cout << o[i] << " ";
        }
        cout << "\n";
    }
}