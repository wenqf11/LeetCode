#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    vector<int> res = s.singleNumber(nums);
    for (auto i : res) {
        cout << i << endl;
    }
}