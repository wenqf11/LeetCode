#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 2, 3};
    vector<int> nums(a, a + 3);
    s.findSubsequences(nums);
}