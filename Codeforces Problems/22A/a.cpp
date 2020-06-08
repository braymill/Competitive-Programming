#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n == 1){
        cout << "NO";
        return 0;
    }
    vector<int> v (n);
    for (int i = 0; i < n; i++){
        int cur;
        cin >> cur;
        v.at(i) = cur;
    }
    sort(v.begin(), v.end());
    int o = 101;
    for (int i = 1; i < v.size(); i++){
        if (v.at(i) != v.at(i - 1)){
            cout << v.at(i);
            return 0;
        }
    }
    cout << "NO";
}