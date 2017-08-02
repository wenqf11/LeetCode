#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {1, 3, -1, -3, 5, 3, 6, 7};
    vector<int> nums(a, a + 8);
    vector<double> ans = s.medianSlidingWindow(nums, 3);
    for (auto r : ans) {
        cout << r << " ";
    }
    cout << endl;
}