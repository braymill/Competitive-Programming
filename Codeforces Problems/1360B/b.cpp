#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t, n;
    int mxn = 50;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        vector<int> a (mxn);
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        for (vector<int>::iterator it = a.begin(); it != a.end(); it++){
            if (*it != 0){
                cout << *it << " ";
            }
        }
        cout << "\n";
    }
}