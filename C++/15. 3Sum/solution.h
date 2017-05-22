#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using std::string;
using std::vector;


class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		vector<vector<int>> ans;

		for (int i = 0; i < nums.size(); i++) {
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			int start = i + 1, end = nums.size() - 1;
			int target = -nums[i];
			while (start < end) {
				if (start > i + 1 && nums[start - 1] == nums[start]) {
					start++;
					continue;
				}
				if (nums[start] + nums[end] < target) {
					start++;
				}
				else if (nums[start] + nums[end] > target) {
					end--;
				}
				else {
					vector<int> triple;
					triple.push_back(nums[i]);
					triple.push_back(nums[start]);
					triple.push_back(nums[end]);
					ans.push_back(triple);
					start++;
				}
			}
		}
		return ans;
	}
};