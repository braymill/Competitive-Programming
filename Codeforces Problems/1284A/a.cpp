#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s (n);
    vector<string> t (m);
    for (int i = 0; i < n; i++){
        string cur;
        cin >> cur;
        s.at(i) = cur;
    }
    for (int i = 0; i < m; i++){
        string cur;
        cin >> cur;
        t.at(i) = cur;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int c;
        cin >> c;
        string o = "";
        if (c % n == 0){
            o += s.at(s.size() - 1);
        } else {
            o += s.at(c % n - 1);
        }
        if (c % m == 0){
            o += t.at(t.size() - 1);
        } else {
            o += t.at(c % m - 1);
        }
        cout << o << "\n";
    }
}