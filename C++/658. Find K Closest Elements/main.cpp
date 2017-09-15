#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);


    vector<int> ans = s.findClosestElements(nums, 2, 3);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}