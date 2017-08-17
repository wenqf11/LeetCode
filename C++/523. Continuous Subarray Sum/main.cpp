#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(23);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(7);
    cout << s.checkSubarraySum(nums, 41) << endl;
    return 0;
}