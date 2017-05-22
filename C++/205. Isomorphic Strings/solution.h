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
#include <unordered_map>
using namespace std;


class Solution {
public:
	bool isIsomorphic(string s, string t) {
		unordered_map<char, char> mapS, mapT;
		int len = s.size();
		for (int i = 0; i < len; i++) {
			if (!mapS[s[i]]) {
				mapS[s[i]] = t[i];
			} else if (mapS[s[i]] != t[i]) {
				return false;
			}

			if (!mapT[t[i]]) {
				mapT[t[i]] = s[i];
			} else if (mapT[t[i]] != s[i]) {
				return false;
			}
		}
		return true;
	}
};