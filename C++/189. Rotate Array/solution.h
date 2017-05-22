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
using namespace std;


class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		if (k > nums.size()) k = k % nums.size();
		vector<int> vec;
		for (int i = nums.size() - k; i < nums.size(); i++) {
			vec.push_back(nums[i]);
		}
		for (int i = 0; i < nums.size() - k; i++) {
			vec.push_back(nums[i]);
		}
		nums = vec;
	}
};