#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);

    cout << s.increasingTriplet(nums) << endl;

}