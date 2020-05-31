#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    int sum = 0;
    vector<int> l;
    bool neg = false;
    int lneg = -1000000;
    for (int i = 0; i < n; i++){
        int cur;
        cin >> cur;
        if (cur < 0 && cur > lneg){
            lneg = cur;
        }
        if (cur < 0 && !neg){
            neg = true;
        }
        sum += cur;
        l.push_back(cur);
    }
    if (!neg || l.size() == 1){
        if (k % 2 == 1){
            cout << sum - 2 * l[0];
        } else {
            cout << sum;
        }
    } else {
        for (auto it = l.begin(); it != l.end(); it++){
            int cur = *it;
            if (k > 0){
                if (cur < 0){
                    k--;
                    sum -= cur;
                    sum += -cur;
                } else {
                    if (k % 2 == 1 && cur != 0){
                        int s = min(-lneg, cur);
                        sum -= s;
                        sum += -s;
                        break;
                    } else {
                        break;
                    }
                }
            } else {
                break;
            }
        }
        cout << sum;
    }
}