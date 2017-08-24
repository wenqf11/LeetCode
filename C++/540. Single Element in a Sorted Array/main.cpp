#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> nums(a, a + 9);

    cout << s.singleNonDuplicate(nums) << endl;
    return 0;
}