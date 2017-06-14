#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    vector<int> nums2;

    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(2);
    nums2.push_back(2);
    nums2.push_back(2);
    nums2.push_back(1);
    nums2.push_back(1);

    s.intersection(nums, nums2);

}