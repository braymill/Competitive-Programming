#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> p (n);
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    int l = 0;
    int r = n - 1;
    int s = 0;
    while (s < n){
        if (p[l] <= k){
            s++;
            l++;
        } else if (p[r] <= k){
            s++;
            r--;
        } else {
            break;
        }
    }
    cout << s;
}