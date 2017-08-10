#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 2};
    vector<int> nums(a, a + 2);
    cout << s.findPoisonedDuration(nums, 2) << endl;
}