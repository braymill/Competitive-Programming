#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, k;
        string s;
        cin >> n >> k >> s;
        int m = 0;
        vector<char> v (n);
        int o = 0;
        for (int j = 0; j < n; j++){
            if (s[j] == '1'){
                o++;
            }
            v.at(j) = s[j];
        }
        for (int j = 0; j < n; j++){
            bool can = true;
            if (v.at(j) == '0'){
                for (int p2 = 1; p2 < k + 1; p2++){
                    int r = j + p2;
                    int l = j - p2;
                    if ((r < n && v.at(r) == '1') || (l >= 0 && v.at(l) == '1')){
                        can = false;
                    }
                }
            }
            if (can){
                v.at(j) = '1';
                m++;
            }
        }
        // for (int j = 0; j < n; j++){
        //     cout << v.at(j);
        // }
        // cout << "\n";
        cout << m - o << "\n";
    }
}