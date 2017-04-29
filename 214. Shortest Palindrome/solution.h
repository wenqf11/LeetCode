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
	string shortestPalindrome(string s) {
		int n = s.size();
		string t = s;
		reverse(t.begin(), t.end());
		int i = 0;
		for (i = n; i >= 0; i--) {
			if (s.substr(0, i) == t.substr(n - i)) {
				break;
			}
		}
		return t.substr(0, n - i) + s;
	}
};