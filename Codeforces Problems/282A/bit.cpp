#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    string cur;
    cin >> t;
    int ans = 0;
    for (int i = 0; i < t; i++){
        cin >> cur;
        ans = cur[1] == '+' ? ans + 1 : ans - 1;
    }
    cout << ans;
}