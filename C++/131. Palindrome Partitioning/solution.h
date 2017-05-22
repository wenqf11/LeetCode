#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
private:
	vector<vector<string>> ans;

public:
	bool isPalindrome(string s) {
		for (int i = 0; i <= s.size() / 2; i++) {
			if (s[i] != s[s.size() - 1 - i]) return false;
		}
		return true;
	}

	void dfsPartition(string lastword, string s, vector<string> v) {
		v.push_back(lastword);
		if (s == "") {
			ans.push_back(v);
			return ;
		}
		string subStr;
		for (int i = 0; i < s.size(); i++) {
			subStr = s.substr(0, i + 1);
			if (isPalindrome(subStr)) {
				dfsPartition(subStr, s.substr(i + 1, s.size() - 1 - i), v);
			}
		}
	}
	vector<vector<string>> partition(string s) {
		vector<string> v;
		string subStr;
		for (int i = 0; i < s.size(); i++) {
			subStr = s.substr(0, i + 1);
			if (isPalindrome(subStr)) {
				dfsPartition(subStr, s.substr(i + 1, s.size() - 1 - i), v);
			}
		}
		return ans;
	}
};