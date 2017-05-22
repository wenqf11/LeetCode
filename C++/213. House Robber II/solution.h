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
	int rob(vector<int> &nums, int left, int right) {
		int a = 0, b = 0;
		for (int i = left; i < right; ++i) {
			int m = a, n = b;
			a = n + nums[i];
			b = max(m, n);
		}
		return max(a, b);
	}

	int rob(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		if (nums.size() == 1) return nums[0];
		return max(rob(nums, 0, nums.size() - 1), rob(nums, 1, nums.size()));
	}
};