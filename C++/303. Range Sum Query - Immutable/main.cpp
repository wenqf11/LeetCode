#include <iostream>
#include "solution.h"

int main() {
    int a[] = {1, 2, 3, 4, 5};
    vector<int> nums(a, a + 5);
    NumArray *obj = new NumArray(nums);
    int param_1 = obj->sumRange(2, 4);

    cout << param_1 << endl;
}