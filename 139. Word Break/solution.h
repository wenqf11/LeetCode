#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:
	bool wordBreak(string s, vector<string>& wordDict) {
		int len = s.size();
		vector<bool> dp(len + 1, false);
		dp[0] = true;
		for (int i = 1; i <= len; i++)
			for (int j = i - 1; j >= 0; j--) {
				if (dp[j] && find(wordDict.begin(), wordDict.end(), s.substr(j, i - j)) != wordDict.end()) {
					dp[i] = true;
					break;
				}
			}
		return dp[len];
	}
};