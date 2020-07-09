#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p (n);
    int total = 0;
    for (int i = 0; i < n; i++){
        cin >> p[i];
        total += p[i];
    }
    vector<int> c;
    int curr = p[0];
    int idx = 1;
    c.push_back(1);
    while (curr <= total / 2 && idx < n){
        if (p[idx] * 2 <= p[0]){
            c.push_back(idx + 1);
            curr += p[idx];
        }
        idx++;
    }
    if (curr <= total / 2){
        cout << 0;
    } else {
        cout << c.size() << "\n";
        for (int i = 0; i < c.size(); i++){
            if (c[i] != 0){
                cout << c[i] << " ";
            }
        }
    }

}