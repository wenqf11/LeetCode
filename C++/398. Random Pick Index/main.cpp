#include <iostream>
#include "solution.h"

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    Solution *obj = new Solution(nums);
    cout << obj->pick(3) << endl;

}