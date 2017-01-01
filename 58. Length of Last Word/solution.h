#pragma once
#include<vector>
#include<string>
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
	int lengthOfLastWord(string s) {
		int last = -1;
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] != ' ') {
				last = i;
				break;
			}
		}

		for (int i = last; i >= 0; i--) {
			if (s[i] == ' ') {
				return last - i;
			}
		}
		if (last != -1) {
			return last + 1;
		}
		else {
			return 0;
		}
	}
};