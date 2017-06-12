#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector< vector<int> > matrix(3, vector<int>(3, 0));
    matrix[0][0] = 9;
    matrix[0][1] = 9;
    matrix[0][2] = 4;

    matrix[1][0] = 6;
    matrix[1][1] = 6;
    matrix[1][2] = 8;

    matrix[2][0] = 2;
    matrix[2][1] = 1;
    matrix[2][2] = 1;
    cout << s.longestIncreasingPath(matrix) << endl;
}