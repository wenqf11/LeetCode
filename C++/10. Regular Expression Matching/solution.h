#pragma once
#include<vector>
#include<string>
#include<climits>
using std::string;
using std::vector;


class Solution {
public:
	bool isMatch(string s, string p) {
		return isMatchStr(s, p, 0, 0);
	}
	bool isMatchStr(string s, string p, int i, int j) {
		if (j == p.length()) return i == s.length();

		if (j == p.length()-1 || p[j+1] != '*')
		{
			if (s[i]==p[j] || p[j] == '.' && i != s.length())
			{
				return isMatchStr(s, p, i+1, j+1);
			}
			return false;
		}
		else
		{
			while ((s[i] == p[j] || p[j] == '.' ) && i != s.length())
			{
				if (isMatchStr(s, p, i, j+2))
				{
					return true;
				}
				i++;
			}
			return isMatchStr(s, p, i, j + 2);

		}
	}
};