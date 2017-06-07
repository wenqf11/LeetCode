#include <iostream>
#include "solution.h"

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(1);
    NumArray num(nums);
    num.update(1, 4);
    cout << num.sumRange(1, 3) << endl;
}