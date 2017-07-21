#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int a[] = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> nums(a, a + 8);
    vector<int> res = s.findDisappearedNumbers(nums);
    for (int r : res) {
        cout << r << " ";
    }
}