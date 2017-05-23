#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 0, 3, 0, 12};
    vector<int> nums(a, a + 5);
    s.moveZeroes(nums);

    for (auto s : nums) {
        cout << s << endl;
    }
}