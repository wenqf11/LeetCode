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
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        if (m == 0) {
            return n;
        } else if (n == 0) {
            return m;
        }
        vector< vector<int> > f(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            f[i][0] = word1[i] == word2[0];
            if (i > 0)f[i][0] = max(f[i][0], f[i - 1][0]);
        }

        for (int i = 0; i < n; ++i) {
            f[0][i] = word1[0] == word2[i];
            if (i > 0 )f[0][i] = max(f[0][i], f[0][i - 1]);
        }

        for (int i = 1; i < m; ++i)
            for (int j = 1; j < n; ++j) {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                if (word1[i] == word2[j]) {
                    f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
                }
            }
        return m + n - 2 * f[m - 1][n - 1];
    }
};