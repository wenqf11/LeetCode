#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector< vector<int> > matrix(2, vector<int>(2, 0));
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[1][0] = 3;
    matrix[1][1] = 4;
    vector<int> ans = s.findDiagonalOrder(matrix);
    cout << ans[0] << " " << ans[1] << endl;
}