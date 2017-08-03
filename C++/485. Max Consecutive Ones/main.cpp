#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 1, 0, 1, 1, 1};
    vector<int> nums(a, a + 6);
    cout << s.findMaxConsecutiveOnes(nums) << endl;
}