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
    int getMoneyAmount(int n) {
        vector< vector<int> > dp(n + 1, vector<int>(n + 1, 0));
        return solve(dp, 1, n);
    }

    int solve(vector< vector<int> > &dp, int left, int right) {
        if (left >= right) return 0;
        if (dp[left][right]) return dp[left][right];
        dp[left][right] = INT_MAX;
        for (int i = left; i <= right; ++i) {
            dp[left][right] = min(dp[left][right], i + max(solve(dp, left, i - 1), solve(dp, i + 1, right)));
        }
        return dp[left][right];
    }
};