#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> A, B, C, D;
    A.push_back(1);
    A.push_back(2);
    B.push_back(-2);
    B.push_back(-1);
    C.push_back(-1);
    C.push_back(2);
    D.push_back(0);
    D.push_back(2);

    cout << s.fourSumCount(A, B, C, D) << endl;
}