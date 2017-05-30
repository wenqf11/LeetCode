#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <unordered_map>
using namespace std;


class NumMatrix {
private:
    vector< vector<int> > regionMatrix;
public:
    NumMatrix(vector< vector<int> > matrix) {
        int m = matrix.size();
        if (m == 0) return;
        int n = matrix[0].size();

        vector<vector<int> > mMatrix(m, vector<int>(n, 0));
        vector<int> sum(n, 0);
        for (int i = 0; i < m; ++i) {
            sum[0] = matrix[i][0];
            mMatrix[i][0] = (i > 0 ? mMatrix[i - 1][0] : 0) + sum[0];
            for (int j = 1; j < n; ++j) {
                sum[j] = sum[j - 1] + matrix[i][j];
                mMatrix[i][j] = (i > 0 ? mMatrix[i - 1][j] : 0) + sum[j];
            }
        }

        regionMatrix = mMatrix;
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = regionMatrix[row2][col2];
        if (row1 > 0) ans -= regionMatrix[row1 - 1][col2];
        if (col1 > 0 ) ans -= regionMatrix[row2][col1 - 1];
        if (row1 > 0 && col1 > 0) ans += regionMatrix[row1 - 1][col1 - 1];
        return ans;
    }
};