#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    if (w % 2 == 0 && w != 2){
        cout << "YES";
    } else{
        bool one = w - 1 % 2 == 0;
        bool two = w - 2 % 2 == 0;
        if (one && two && w != 2){
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}