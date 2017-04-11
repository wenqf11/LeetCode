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
	int titleToNumber(string s) {
		int base = 1, ans = 0;
		for (int i = s.size() - 1; i >= 0; i--) {
			ans += (s[i] - 'A' + 1) * base;
			base *= 26;
		}
		return ans;
	}
};