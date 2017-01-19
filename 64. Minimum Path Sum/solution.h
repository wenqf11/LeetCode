#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		if (grid.empty() || grid[0].empty()) return 0;
		int m = grid.size(), n = grid[0].size();
		vector<vector<int>> dp(2, vector<int>(n,0));
		for (int i = 0; i < m; ++i) {
			dp[i % 2][0] = dp[1 - i % 2][0]+grid[i][0];
			for (int j = 1; j < n; ++j) {
				if (i > 0) {
					dp[i % 2][j] = min(dp[i % 2][j - 1], dp[1 - i % 2][j]) + grid[i][j];
				} else {
					dp[i % 2][j] = dp[i % 2][j - 1] + grid[i][j];
				};
			}
		}
		return dp[(m-1)%2][n - 1];
	}
};