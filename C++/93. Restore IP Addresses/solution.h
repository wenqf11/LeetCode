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
		if (str.size() > 3) {
			return false;
		}
		int num = atoi(str.c_str());
		if (str.size() == 3 && (num > 255 || num < 100)) {
			return false;
		}
		if (str.size() == 2 && (num < 10)) {
			return false;
		}
		return true;
	}
	vector<string> restoreIpAddresses(string s) {
		string first, second, third, fourth;
		vector<string> res;
		for (int i = 1; i < s.size(); i++) {
			first = s.substr(0, i);
			if (!isValid(first)) {
				continue;
			}
			for (int j = i+1; j < s.size(); j++) {
				second = s.substr(i, j-i);
				if (!isValid(second)) {
					continue;
				}
				for (int k = j+1; k < s.size(); k++) {
					third = s.substr(j, k - j);
					fourth = s.substr(k, s.size() - k);
					if (isValid(third) && isValid(fourth)) {
						res.push_back(first + "." + second + "." + third + "." + fourth);
					}
				}
			}
		}
		return res;
	}
};