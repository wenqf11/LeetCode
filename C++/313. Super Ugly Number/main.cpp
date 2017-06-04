#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(13);
    nums.push_back(19);
    cout << s.nthSuperUglyNumber(12, nums) << endl;
}