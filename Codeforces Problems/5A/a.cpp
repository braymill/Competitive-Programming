#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int o = 0;
    for (int c = 0; c < 100; c++){
        string s;
        getline(cin, s);
        if (s.empty()){
            break;
        }
        if (s[0] == '+'){
            n++;
        } else if (s[0] == '-'){
            n--;
        } else {
            for (int i = 0; i < s.length(); i++){
                if (s[i] == ':'){
                    o += n * (s.length() - i - 1);
                    break;
                }
            }
        }
    }
    cout << o;
}