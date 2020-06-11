#include <iostream>
using namespace std;

bool letter(char c){
    return c == 'h' || c == 'e' || c == 'l' || c == 'o';
}

int main(){
    string s;
    cin >> s;
    string se = "";
    for (int i = 0; i < s.length(); i++){
        if (letter(s[i])){
            se += s[i];
        }
    }
    string o = "";
    bool let[5];
    for (int i = 0; i < 5; i++){
        let[i] = false;
    }
    // cout << se << "\n";
    for (int i = 0; i < se.length(); i++){
        if (se[i] == 'h'){
            let[0] = true;
            // cout << "A\n";
        } else if (se[i] == 'e' && let[0]){
            let[1] = true;
            // cout << "B\n";
        } else if (se[i] == 'l' && let[0] && let[1]){
            if (!let[2]){
                let[2] = true;
                // cout << "C\n";
            } else {
                let[3] = true;
                // cout << "D\n";
            }
        } else {
            // cout << "\n";
            if (let[0] && let[1] && let[2] && let[3]){
                cout << "YES";
                return 0;
            }
        }
    } 
    // for (int i = 0; i < 5; i++){
    //     cout << let[i] << "\n";
    // }
    cout << "NO";
}

