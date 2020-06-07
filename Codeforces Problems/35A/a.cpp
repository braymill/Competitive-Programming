#include <iostream>
using namespace std;

int main(){
    int start;
    cin >> start;
    int c[3];
    // initialize setup
    for (int i = 0; i < 3; i++){
        c[i] = 0;
    }
    // zero indexing
    c[start - 1] = 1;
    for (int i = 0; i < 3; i++){
        int s;
        int e;
        cin >> s >> e;
        int temp = c[s - 1];
        c[s - 1] =  c[e - 1];
        c[e - 1] = temp;
    }
    for (int i = 0; i < 3; i++){
        if (c[i] == 1){
            cout << i + 1;
            return 0;
        }
    }
}