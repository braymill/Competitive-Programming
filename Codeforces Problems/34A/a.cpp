#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v (n);
    vector<int> v2 (n);
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        v.at(i) = c;
    }
    int mn = 1005;
    int mni1 = -1;
    int mni2 = -1;
    for (int p1 = 0; p1 < n - 1; p1++){
        int d = abs(v.at(p1) - v.at(p1 + 1));
        if (d < mn){
            mn = d;
            mni1 = p1;
            mni2 = p1 + 1;
        }
    }
    if (abs(v.at(0) - v.at(v.size() - 1)) < mn){
        mni1 = 0;
        mni2 = v.size() - 1;
    }
    cout << mni1 + 1 << " " << mni2 + 1;
}