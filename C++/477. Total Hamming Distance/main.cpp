#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(3);
    cout << s.totalHammingDistance(nums) << endl;
}