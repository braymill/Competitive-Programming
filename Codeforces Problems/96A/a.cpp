#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string one = "1111111";
    string zero = "0000000";
    if (s.length() < 7){
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s.length() - 6; i++){
        string cur = s.substr(i, 7);
        if (cur.compare(one) == 0 || cur.compare(zero) == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}