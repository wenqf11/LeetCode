#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector< vector<int> > matrix(2, vector<int>(3, 0));
    matrix[0][0] = 1;
    matrix[0][1] = 0;
    matrix[0][2] = 1;
    matrix[1][0] = 0;
    matrix[1][1] = -2;
    matrix[1][2] = 3;
    cout << s.maxSumSubmatrix(matrix, 2) << endl;

}