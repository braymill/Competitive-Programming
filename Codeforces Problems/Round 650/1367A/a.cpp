#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string s;
        cin >> s;
        string o = "";
        for (int i = 0; i < s.length(); i += 2){
            o += s[i];
        }
        o += s[s.length() - 1];
        cout << o << "\n";
    }
}