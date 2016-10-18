#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack>  
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;

class Solution {
public:
	int jump(vector<int>& nums) {
		int ret = 0;
		int last = 0;
		int curr = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (i > last) {
				last = curr;
				++ret;
			}
			curr = max(curr, i + nums[i]);
		}

		return ret;
	}
};