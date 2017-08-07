#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector< vector<int> >& matrix) {
        int m = matrix.size();
        if (m == 0) return {};
        int n = matrix[0].size();
        if (n == 0) return {};
        vector<int> res(m * n, 0);
        int i = 0, j = 0;
        int ii = -1, jj = 1;
        int k = 0;
        while (k < m * n) {
            res[k] = matrix[i][j];
            i += ii;
            j += jj;
            if (i >= m) {
                i = m - 1;
                j +=  2;
                ii = -ii;
                jj = -jj;
            }
            if (j >= n) {
                j = n - 1;
                i += 2;
                ii = -ii;
                jj = -jj;
            }
            if (i < 0) {
                i = 0;
                ii = -ii;
                jj = -jj;
            }
            if (j < 0) {
                j = 0;
                ii = -ii;
                jj = -jj;
            }

            ++k;
        }
        return res;
    }
};