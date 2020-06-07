#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vals (n);
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        vals.at(i) = c;
    }
    sort(vals.begin(), vals.end());
    int o = 0;
    for (int i = 0; i < m; i++){
        int cur = vals.at(i);
        if (cur >= 0){
            break;
        } else {
            o -= vals.at(i);
        }
    }
    cout << o;

}