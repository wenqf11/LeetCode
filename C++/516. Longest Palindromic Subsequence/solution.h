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
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector< vector<int> > f(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            f[i][i] = 1;
        }
        for (int l = 1; l <= n; l++) {
            for (int i = 0; i < n - l; ++i) {
                int j = i + l;
                f[i][j] = max(f[i][j], f[i][j - 1]);
                f[i][j] = max(f[i][j], f[i + 1][j]);
                if (s[i] == s[j]) {
                    if (j > i + 1) f[i][j] = max(f[i][j], f[i + 1][j - 1] + 2);
                    else f[i][j] = 2;
                }
            }
        }
        return f[0][n - 1];
    }
};