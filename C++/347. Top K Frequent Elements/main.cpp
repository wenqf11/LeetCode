#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);

    vector<int> res = s.topKFrequent(nums, 2);

    for (auto r : res) {
        cout << r << " ";
    }
    cout << endl;

}