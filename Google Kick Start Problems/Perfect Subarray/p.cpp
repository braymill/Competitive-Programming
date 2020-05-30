#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 1; i < T + 1; i++){
        int n;
        cin >> n;
        long a[100005];
        int total = 0;
        double num;
        double sum;
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
         // need to change from brute force approach to pass set 2
        for (int j = 0; j < n; j++){
            sum = a[j];
            for (int k = j; k < n; k++){
                if (k != j){
                    sum += a[k];
                }
                num = sqrt(sum);
                if ((int) num == num){
                    total++;
                }
            }
        }
        string out = "Case #" + to_string(i) + ": " + to_string(total);
        cout << out << "\n";
    }

}