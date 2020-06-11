#include <iostream>
using namespace std;

// number theory problem

int main(){
    int x;
    cin >> x;
    if (x % 4 == 1){
        cout << 0 << " A";
        return 0;
    } else if (x % 4 == 3){
        cout << 2 << " A";
        return 0;
    } else if (x % 4 == 2){
        cout << 1 << " B";
        return 0;
    } else {
        cout << 1 << " A";
        return 0;
    }
}