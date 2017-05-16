#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
public:
	bool isAnagram(string s, string t) {
		unordered_map<char, int> m;
		if (s.size() != t.size()) return false;
		for (int i = 0; i < s.size(); i++) {
			m[s[i]]++;
		}
		for (int i = 0; i < t.size(); i++) {
			if (m[t[i]] > 0)m[t[i]]--;
			else return false;
		}
		return true;
	}
};