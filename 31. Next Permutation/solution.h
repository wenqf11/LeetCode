#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include <stack>  
using std::string;
using std::vector;
using std::stack;

class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		if (nums.size() < 2) return;
		int max = nums[nums.size() - 1], ind = -1, ind_next= nums.size() - 1;
		for (int i = nums.size() - 2; i >= 0; i--) {
			if (nums[i] < max) {
				ind = i;
				break;
			}
			else {
				max = nums[i];
				ind_next = i;
			}
		}
		int min = max;
		for (int i = ind + 1; i < nums.size(); i++) {
			if (nums[i] > nums[ind] && nums[i] < min) {
				min = nums[i];
				ind_next = i;
			}
		}

		if (ind != -1) {
			int tmp = nums[ind];
			nums[ind] = nums[ind_next];
			nums[ind_next] = tmp;
		}

		sort(nums.begin()+ind+1, nums.end());
	}
};