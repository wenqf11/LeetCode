#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {0, 2, 3};
    vector<int> nums(a, a + 3);
    cout << s.hIndex(nums) << endl;
}