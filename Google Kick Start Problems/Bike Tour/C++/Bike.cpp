#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int T;
    long a[105];
    cin >> T;
    for (int i = 1; i < T + 1; i++){
        int n;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
        int c = 0;
        for (int k = 1; k < n - 1; k++){
            if (a[k - 1] < a[k] && a[k] > a[k + 1]){
                c++;
            }
        }
        string ans = "Case #" + to_string(i) + ": " + to_string(c);
        cout << ans << '\n';
    }
}
