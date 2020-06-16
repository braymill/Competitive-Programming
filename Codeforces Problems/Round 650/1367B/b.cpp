#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> v (n);
        for (int j = 0; j < n; j++){
            cin >> v.at(j);
        }
        int m = 0;
        bool possible = true;
        for (int j = 0; j < n; j++){
            if (j % 2 != v.at(j) % 2){
                for (int p2 = j + 1; p2 < n; p2++){
                    if (p2 % 2 == v.at(j) % 2 && j % 2 == v.at(p2) % 2){
                        m++;
                        int t = v.at(p2);
                        v.at(p2) = v.at(j);
                        v.at(j) = t;
                        break;
                    }
                }
            }
            if (j % 2 != v.at(j) % 2){
                possible = false;
                cout << -1 << "\n";
            }
        }
        // for (int i = 0; i < n; i++){
        //     cout << v.at(i) << " ";
        // }
        // cout << "\n";
        if (possible){
            cout << m << "\n";
        }
    }
}