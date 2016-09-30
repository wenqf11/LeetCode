#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using std::string;
using std::vector;


class Solution {
public:
	vector<string> letterCombinations(string digits) {
		string dig2letter[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
		vector<string> prevResult, result;
		if (digits.length() == 0) return prevResult;
		prevResult.push_back("");
		for (int i = 0; i < digits.size(); i++) {
			int d = int(digits[i] - '0');
			for (int j = 0; j < dig2letter[d].size(); j++) {
				for (int k = 0; k < prevResult.size(); k++) {
					result.push_back(prevResult[k] + dig2letter[d][j]);
				}
			}
			prevResult.assign(result.begin(), result.end());
			result.clear();
		}
		return prevResult;
	}
};