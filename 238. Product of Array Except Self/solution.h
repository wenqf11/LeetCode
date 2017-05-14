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
using namespace std;


class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int len = nums.size();
		vector<int> ans(len, 0);

		int mul = 1;
		for (int i = 0; i < nums.size(); i++) {
			ans[i] = mul;
			mul *= nums[i];
		}

		mul = 1;
		for (int i = nums.size() - 1; i >= 0; i--) {
			ans[i] *= mul;
			mul *= nums[i];
		}
		return ans;
	}
};