#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v (n);
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        v.at(i) = c;
    }
    vector<int> o (n);
    for (int i = 1; i < n + 1; i++){
        o.at(v.at(i - 1) - 1) = i;
    }
    for (int i = 0; i < n; i++){
        cout << o.at(i) << " ";
    }
}