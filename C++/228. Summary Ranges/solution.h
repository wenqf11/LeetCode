#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution {
public:
	string int2str(int a) {
		stringstream ss;
		ss << a;
		string s = ss.str();
		return s.c_str();
	}
	vector<string> summaryRanges(vector<int>& nums) {
		int n = nums.size();
		vector<string>  res;
		int start = 0, end = 0, i  = 0;
		while (i < n) {
			if (i + 1 == n || nums[i + 1] != nums[i] + 1) {
				string str;
				if (start < i) {
					str = int2str(nums[start]) + "->" + int2str(nums[i]);
				} else if (start == i) {
					str = int2str(nums[start]);
				}
				res.push_back(str);
				++i;
				start = i;
			} else {
				++i;
			}
		}
		return res;
	}
};