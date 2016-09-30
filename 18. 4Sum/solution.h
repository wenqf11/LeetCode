#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using std::string;
using std::vector;


class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> ans;

		int res = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			for (int j = i + 1; j < nums.size(); j++) {
				if (j > 0 && j - 1 > i && nums[j] == nums[j - 1]) {
					continue;
				}
				int start = j + 1, end = nums.size() - 1;
				while (start < end) {
					if (start > j + 1 && nums[start - 1] == nums[start]) {
						start++;
						continue;
					}

					if (nums[start] + nums[end] + nums[j] + nums[i] < target) {
						start++;
					}
					else if (nums[start] + nums[end] + nums[j]+ nums[i] > target) {
						end--;
					}
					else {
						vector<int> triple;
						triple.push_back(nums[i]);
						triple.push_back(nums[j]);
						triple.push_back(nums[start]);
						triple.push_back(nums[end]);
						ans.push_back(triple);
						start++;
					}
				}
			}
		}
		return ans;
	}
};