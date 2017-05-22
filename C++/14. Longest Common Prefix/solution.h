#pragma once
#include<vector>
#include<string>
#include<climits>
using std::string;
using std::vector;


class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		int n = strs.size();
		if (n == 0) return "";
		int minLen = strs[0].length();
		for (int i = 1; i < n; ++i) {
			if (strs[i].length() < minLen) {
				minLen = strs[i].length();
			}
		}

		int pos = minLen;
		bool flag = false;
		for (int j = 0; j < minLen; ++j) {
			for (int i = 1; i < n; ++i) {
				if (strs[i][j] != strs[i-1][j]) {
					pos = j;
					flag = true;
					break;
				}
			}
			if (flag) break;
		}
		return strs[0].substr(0, pos);
	}
};