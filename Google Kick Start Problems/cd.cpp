#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int T, n, k;
    long a[200005];
    cin >> T;
    for (int i = 1; i < T + 1; i++){
        cin >> n >> k;
        int ans = 0;
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
        int idx = 0;
        while (idx <= n - k){
            if (a[idx] == k){
                int count = 0;
                int cont = 1;
                for (int c = idx; c < idx + k - 1 && cont; c++){
                    if (c + 1 < n && a[c] == a[c + 1] + 1){
                        count++;
                    } else {
                        cont = 0;
                    }
                }
                if (count == k - 1){
                    ans++;
                }
                idx += max(count, 1);
            } else {
                idx++;
            }
        }
        string out = "Case #" + to_string(i) + ": " + to_string(ans);
        cout << out << "\n";
    }
}