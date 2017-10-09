#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector< vector<int> > nums(2, vector<int>(2, 0));
    cout << s.matrixReshape(nums, 1, 4).size() << endl;
}