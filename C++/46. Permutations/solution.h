#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<stack>  
#include<unordered_map>
#include<sstream>
using namespace std;

class Solution {
public:
	vector<vector<int>> ans;
	void perm(vector<int>& nums, int start, int length)
	{
		if (start == length - 1)
		{
			ans.push_back(nums);
		} else {
			for (int i = start; i <= length - 1; i++){	
				swap(nums[start], nums[i]);
				perm(nums, start + 1, length);
				swap(nums[start], nums[i]);
			}
		}
	}

	vector<vector<int>> permute(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		perm(nums, 0, nums.size());
		return ans;
	}
};