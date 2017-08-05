#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 1, 1, 1, 1};
    vector<int> nums(a, a + 5);
    cout << s.findTargetSumWays(nums, 3) << endl;
}