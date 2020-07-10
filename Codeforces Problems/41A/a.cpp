#include <iostream>
using namespace std;

int main(){
    string o, b;
    cin >> o >> b;
    for (int i = 0; i < o.length(); i++){
        if (o[i] != b[b.length() - 1 - i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}