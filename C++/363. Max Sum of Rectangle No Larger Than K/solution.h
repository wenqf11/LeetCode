#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;


class Solution {
public:
    int maxSumSubmatrix(vector< vector<int> >& matrix, int k) {
        int m = matrix.size();
        if (m == 0) return 0;
        int n = matrix[0].size();
        if (n == 0) return 0;
        vector< vector<int> > sum(m, vector<int>(n, 0));
        int tmpSum = 0;

        for (int i = 0; i < m; ++i) {
            tmpSum = 0;
            for (int j = 0; j < n; ++j) {
                tmpSum += matrix[i][j];
                if (i > 0) sum[i][j] = sum[i - 1][j] + tmpSum;
                else sum[i][j] = tmpSum;
            }
        }

        int ans = INT_MIN;
        int tmpK = k;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < m - i; ++k)
                    for (int l = 0; l < n - j; ++l) {
                        tmpSum = sum[i + k][j + l];
                        if (j > 0) tmpSum -= sum[i + k][j - 1];
                        if (i > 0) tmpSum -= sum[i - 1][j + l];
                        if (i > 0 && j > 0) tmpSum += sum[i - 1][j - 1];
                        if (tmpSum <= tmpK) ans = max(ans, tmpSum);
                    }
            }
        return ans;
    }
};