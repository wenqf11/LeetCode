#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        vector<int> sums(n + 1, 0);
        vector< vector<int> > dp(m + 1, vector<int>(n + 1, INT_MAX));
        dp[0][0] = 0;
        for (int i = 1; i <= n; ++i) {
            sums[i] = sums[i - 1] + nums[i - 1];
        }

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                for (int k = i - 1; k < j; ++k) {
                    dp[i][j] = min(dp[i][j], max(dp[i - 1][k], sums[j] - sums[k]));
                }
            }
        }
        return dp[m][n];
    }
};