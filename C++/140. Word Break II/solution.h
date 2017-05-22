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
private:
	vector<string> res = {};

public:

	void traversal(int index, vector<int> inds, string& s, vector<vector<int>>& sonsOf) {
		inds.push_back(index);

		if (index == 0) {
			string str = "";
			for (int i = 0; i < inds.size() - 2; i++) {
				str = " " + s.substr(inds[i + 1], inds[i] - inds[i + 1]) + str;
			}
			str = s.substr(inds[inds.size() - 1], inds[inds.size() - 2] - inds[inds.size() - 1]) + str;
			res.push_back(str);
		}

		for (int i = 0; i < sonsOf[index].size(); i++) {
			traversal(sonsOf[index][i], inds, s, sonsOf);
		}
	}

	vector<string> wordBreak(string s, vector<string>& wordDict) {
		int len = s.size();
		vector<bool> dp(len + 1, false);
		vector<vector<int>> sonsOf(len + 1);
		dp[0] = true;

		for (int i = 1; i <= len; i++)
			for (int j = i - 1; j >= 0; j--) {
				if (dp[j] && find(wordDict.begin(), wordDict.end(), s.substr(j, i - j)) != wordDict.end()) {
					sonsOf[i].push_back(j);
					dp[i] = true;
				}
			}

		traversal(len, {}, s, sonsOf);

		return res;
	}
};