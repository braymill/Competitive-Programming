#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v (n);
    for (int i = 0; i < n; i++){
        cin >> v.at(i);
    }
    int s = v.at(0);
    cout << s << " ";
    int ps = s;
    for (int i = 1; i < n; i++){
        int c = v.at(i);
        if (c < 0){
            cout << ps + c << " ";
        } else {
            s += c;
            ps = s;
            cout << s << " ";
        }
    }
}