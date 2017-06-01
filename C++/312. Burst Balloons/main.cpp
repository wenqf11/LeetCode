#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {3, 1, 5, 8};
    vector<int> nums(a, a + 4);
    cout << s.maxCoins(nums) << endl;
}