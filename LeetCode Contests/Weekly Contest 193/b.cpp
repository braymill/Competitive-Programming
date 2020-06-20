#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> m;
        for (int i = 0; i < arr.size(); i++){
            m[arr.at(i)]++;
        }
        int n = 0;
        for (auto it = m.begin(); it != m.end(); it++){
            if (it->second == 1){
                n++;
            }
        }
        vector<pair<int, int>> v;
        for (auto it = m.begin(); it != m.end(); it++){
            v.push_back(*it);
        }
        sort(v.begin(), v.end(), [=](pair<int, int>& a, pair<int, int>& b){
            return a.second < b.second;
        }
        );
        int o = v.size();
        for (int i = 0; i < v.size(); i++){
            int freq = v[i].second;
            if (freq <= k){
                k -= freq;
                o--;
                
            } else{
                break;
            }
        }
        return o > 0 ? o : 0;
    }
};