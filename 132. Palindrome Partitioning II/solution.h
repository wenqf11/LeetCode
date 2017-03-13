#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:

	int minCut(string s) {
		vector<vector<bool>> isPalindrome(s.size(), vector<bool>(s.size(), 0));
		vector<int> f(s.size(), 0);
		for (int i = 0; i < s.size(); i++) {
			f[i] = i;
			for (int j = 0; j <= i; j++) {
				if (s[i] == s[j] && (i - j <= 1 || isPalindrome[j + 1][i - 1])) {
					isPalindrome[j][i] = true;
					if (j == 0) {
						f[i] = 0;
					} else {
						f[i] = min(f[i], f[j - 1] + 1);
					}
				}
			}
		}
		return f[s.size() - 1];
	}
};