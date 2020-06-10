#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    for (int i = 0; i < s.length() - 1; i++){
        if (s[i] == s[i + 1]){
            a++;
        }
    }
    cout << a;
}