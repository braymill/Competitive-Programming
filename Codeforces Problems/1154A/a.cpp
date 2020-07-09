#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums (4);
    for (int i = 0; i < 4; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int a = nums[3] - nums[0];
    int b = nums[3] - nums[1];
    int c = nums[3] - nums[2];
    cout << a << " " << b << " " << c;
}