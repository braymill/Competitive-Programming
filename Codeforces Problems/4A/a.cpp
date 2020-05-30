#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    if (w % 2 == 0){
        cout << "YES";
    } else{
        bool one = w - 1 % 2 == 0;
        bool two = w - 2 % 2 == 0;
        cout << one && two ? "YES" : "NO";
    }
}