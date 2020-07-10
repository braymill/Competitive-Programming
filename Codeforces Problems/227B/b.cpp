#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v (n);
    unordered_map<int, int> orig;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        orig[c] = i;
    }
    int m;
    cin >> m;
    vector<int> q (m);
    for (int i = 0; i < m; i++){
        cin >> q[i];
    }
    // go through the queries
    ll va = 0;
    ll p = 0;
    for (int i = 0; i < m; i++){
        int cq = q[i];
        va += orig[cq] + 1;
        p += n - orig[cq];
    }
    cout << va << " " << p;
}