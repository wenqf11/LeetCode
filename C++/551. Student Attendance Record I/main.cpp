#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector< vector<int> > M(3, vector<int>(3, 0));
    M[0][0] = 1;
    M[0][1] = 1;
    M[1][0] = 1;
    M[1][1] = 1;
    M[2][2] = 1;
    cout << s.findCircleNum(M) << endl;
}