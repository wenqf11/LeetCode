#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {4, 10, 4, 3, 8, 9};
    vector<int> nums(a, a + 6);
    cout << s.lengthOfLIS(nums) << endl;
}