#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using std::string;
using std::vector;


class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());

		int minDifference = INT_MAX;
		int res = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			int start = i + 1, end = nums.size() - 1;
			while (start < end) {
				if (start > i + 1 && nums[start - 1] == nums[start]) {
					start++;
					continue;
				}
				if (abs(nums[start] + nums[end] + nums[i] - target) < minDifference) {
					minDifference = abs(nums[start] + nums[end] + nums[i] - target);
					res = nums[start] + nums[end] + nums[i];
				}
				if ( nums[start] + nums[end]+ nums[i] < target ) {
					start++;
				}
				else if (nums[start] + nums[end] + nums[i] > target) {
					end--;
				}
				else {
					start++;
				}
			}
		}
		return res;
	}
};