#pragma once
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


class Solution {
public:
	string minWindow(string s, string t) {
		unordered_map<char, int> ch;
		for (char now : t) {
			ch[now] ++;
		}
		int count = ch.size();
		int j = 0;
		int ans = INT_MAX;
		string res;
		for (int i = 0; i < s.size(); i++) {
			while (j < s.size() && count != 0) {
				ch[s[j]]--;
				if (ch[s[j]] == 0) {
					count--;
				}
				j++;
				if (count == 0) {
					break;
				}
			}

			if (count == 0 && j - i < ans) {
				ans = j - i;
				res = s.substr(i, j - i);
			}

			if (ch[s[i]] == 0) {
				count++;
			}
			ch[s[i]]++;
		}
		return res;
	}
};