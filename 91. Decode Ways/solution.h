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

	bool isValid(string str) {
		int num = atoi(str.c_str());
		if ( 10<= num && num <= 26) {
			return true;
		}
		return false;
	}

	int numDecodings(string s) {	
		if (s.size() < 1) return 0;
		int *f = new int[s.size()];
		memset(f, 0, sizeof(int)*s.size());
		if (s[0] > '0') {
			f[0] = 1;
		} else {
			return 0;
		}
		
		if (s.size() >= 2)	{
			if ('1' <= s[1] && s[1] <= '9') f[1] = f[0];
			if (isValid(s.substr(0, 2))) f[1] += 1;
			if (f[1] == 0) return 0;
		}
		for (int i = 2; i < s.size(); i++) {
			if ('1'<=s[i] && s[i] <= '9') f[i] = f[i - 1];
			if (isValid(s.substr(i - 1, 2))) f[i] += f[i - 2];
			if (f[i] == 0) return 0;
		}
		return f[s.size()-1];
	}
};