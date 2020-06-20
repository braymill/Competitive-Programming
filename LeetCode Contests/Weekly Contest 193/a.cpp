#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> r (nums.size());
        r.at(0) = nums.at(0);
        for (int i = 1; i < nums.size(); i++){
            r.at(i) = r.at(i - 1) + nums.at(i);
        }
        return r;
    }
};