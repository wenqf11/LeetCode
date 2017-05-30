#include <iostream>
#include "solution.h"

int main() {
    vector< vector<int> > matrix(2, vector<int>(2, 0));
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[1][0] = 3;
    matrix[1][1] = 4;
    NumMatrix *obj = new NumMatrix(matrix);
    int param_1 = obj->sumRegion(0, 0, 1, 0);

    cout << param_1 << endl;
}