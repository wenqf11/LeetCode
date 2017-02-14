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

	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<vector<int> > res(1);
		sort(nums.begin(), nums.end());
		int size = 1, last = nums[0];
		for (int i = 0; i < nums.size(); ++i) {
			if (last != nums[i]) {
				last = nums[i];
				size = res.size();
			}
			int newSize = res.size();
			for (int j = newSize - size; j < newSize; ++j) {
				res.push_back(res[j]);
				res.back().push_back(nums[i]);
			}
		}
		return res;
	}
};