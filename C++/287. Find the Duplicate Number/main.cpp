#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 3, 3, 4, 3};
    vector<int> nums(a, a + 5);
    cout << s.findDuplicate(nums) << endl;
}