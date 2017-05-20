#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 0};
    vector<int> nums(a, a + 2);
    cout << s.hIndex(nums) << endl;
}