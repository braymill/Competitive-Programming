#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    string s = to_string(n);
    int nl = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '7' || s[i] == '4'){
            nl++;
        }
    }
    string snl = to_string(nl);
    for (int i = 0; i < snl.length(); i++){
        if (snl[i] != '7' && snl[i] != '4'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}