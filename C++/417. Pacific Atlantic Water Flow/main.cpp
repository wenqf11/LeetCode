#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector< vector<int> > matrix(3, vector<int>(3, 0));
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;

    matrix[1][0] = 8;
    matrix[1][1] = 9;
    matrix[1][2] = 4;

    matrix[2][0] = 7;
    matrix[2][1] = 6;
    matrix[2][2] = 5;

    vector< pair<int, int> > ans = s.pacificAtlantic(matrix);
    for (auto r : ans) {
        cout << r.first << " " << r.second << endl;
    }
}