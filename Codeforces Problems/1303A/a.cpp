#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int firstone = 0;
        while (firstone < s.length() && s[firstone] == '0'){
            firstone++;
        }
        int lastone = s.length() - 1;
        while (lastone >= 0 && s[lastone] == '0'){
            lastone--;
        }
        int z = 0;
        for (int i = firstone; i <= lastone; i++){
            if (s[i] == '0'){
                z++;
            }
        }
        cout << z << "\n";
    }
}