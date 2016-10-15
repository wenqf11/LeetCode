#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<stack>  
#include<unordered_map>
#include<unordered_set>
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
			unordered_set<int> umap;
			for (int i = start; i <= length - 1; i++){	
				if (umap.find(nums[i]) == umap.end()) {
					umap.insert(nums[i]);
					swap(nums[start], nums[i]);
					perm(nums, start + 1, length);
					swap(nums[start], nums[i]);
				}
			}
		}
	}

	vector<vector<int>> permuteUnique(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		perm(nums, 0, nums.size());

		return ans;
	}
};