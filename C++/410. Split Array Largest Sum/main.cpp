#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(7);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(10);
    nums.push_back(8);
    cout << s.splitArray(nums, 2) << endl;
}