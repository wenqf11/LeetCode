#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(18);
    nums.push_back(13);
    nums.push_back(1);
    vector<int> res = s.countSmaller(nums);
    for (auto a : res) {
        cout << a << " ";
    }
}