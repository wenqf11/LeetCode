#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(4);
    int k = 2;
    cout << s.findPairs(nums, k) << endl;
    return 0;
}