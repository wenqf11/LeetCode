#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include <stack>  
using std::string;
using std::vector;
using std::stack;

class Solution {
public:
	int romanToInt(string s) {
		int Num[] = { 1000, 500, 100, 50, 10, 5, 1 };
		char Roman[] = { 'M',  'D', 'C', 'L', 'X', 'V',  'I' };
		int i = 0;
		int ans = 0;
		while (i < s.length()) {
			if (i + 1 < s.length()) {
				if (s[i] == 'C'&&s[i + 1] == 'M') {
					ans += 900;
					i += 2;
				} else if (s[i] == 'C'&&s[i + 1] == 'D') {
					ans += 400;
					i += 2;
				} else if (s[i] == 'X'&&s[i + 1] == 'C') {
					ans += 90;
					i += 2;
				} else if (s[i] == 'X'&&s[i + 1] == 'L') {
					ans += 40;
					i += 2;
				} else if (s[i] == 'I'&&s[i + 1] == 'X') {
					ans += 9;
					i += 2;
				} else if (s[i] == 'I'&&s[i + 1] == 'V') {
					ans += 4;
					i += 2;
				} else {
					for (int j = 0; j < 7; j++) {
						if (s[i] == Roman[j]) {
							ans += Num[j];
							++i;
							break;
						}
					}
				}
			} else {
				for (int j = 0; j < 7; j++) {
					if (s[i] == Roman[j]) {
						ans += Num[j];
						++i;
						break;
					}
				}
			}
		}
		return ans;
	}
};