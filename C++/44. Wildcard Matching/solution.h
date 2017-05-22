#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack>  
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;

class Solution {
public:
	bool isMatch(string s, string p) {
		int i = 0, j = 0;
		int ii = -1, jj = -1;
		while (i < s.length()) {
			if (j < p.length() && p[j] == '*') {
				// skip continuous '*'
				while (j < p.length() && p[j] == '*') ++j;
				if (j == p.length()) return true;
				ii = i;
				jj = j;
			}
			if (j < p.length() && (p[j] == '?' || p[j] == s[i])) {
				++i; ++j;
			}
			else {
				if (ii == -1) return false;
				++ii;
				i = ii;
				j = jj;
			}
		}
		// skip continuous '*'
		while (j < p.length() && p[j] == '*') ++j;
		return i == s.length() && j == p.length();
	}
};