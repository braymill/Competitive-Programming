#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        string s;
        cin >> s;
        int o = 0;
        int i = 0;
        while (i < s.length()){
            if (s[i] == 'A'){
                i++;
                int c = 0;
                while (i < s.length() && s[i] == 'P'){
                    c++;
                    i++;
                }
                if (c > o){
                    o = c;
                }
            } else {
                i++;
            }
        }
        cout << o << "\n";
    }
}