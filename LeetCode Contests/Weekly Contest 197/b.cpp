#include <iostream>
using namespace std;

class Solution {
public:
    int numSub(string s) {
        long long ans = 0;
        long long mod = 1000000007;
        int idx = 0;
        while (idx < s.length()){
            cout << idx << " ";
            if (s[idx] == '1'){
                int next = idx + 1;
                int lg = 1;
                while (next < s.length() && s[next] == '1'){
                    lg++;
                    next++;
                }
                for (int i = 1; i <= lg; i++){
                    ans += i;
                }
                idx = next;
            } else {
                idx++;
            }
        }
        return ans % mod;
    }
};