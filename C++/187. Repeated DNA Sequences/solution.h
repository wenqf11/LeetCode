#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;



class Solution {
public:
	vector<string> findRepeatedDnaSequences(string s) {
		int  hashMap[1048576] = {0};
		vector<string> ans;
		int len = s.size(), hashNum = 0;
		if (len < 11) return ans;
		for (int i = 0; i < 9; ++i)
			hashNum = hashNum << 2 | (s[i] - 'A' + 1) % 5;
		for (int i = 9; i < len; ++i)
			if (hashMap[hashNum = (hashNum << 2 | (s[i] - 'A' + 1) % 5) & 0xfffff]++ == 1)
				ans.push_back(s.substr(i - 9, 10));
		return ans;
	}
};