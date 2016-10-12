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
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		sort(candidates.begin(), candidates.end());
		vector<int> nums;
		solve(candidates, nums, target, 0);
		return ans;
	}

	void solve(vector<int>& candidates, vector<int>& nums, int target, int start) {
		if (target == 0) {
			ans.push_back(nums);
		}
		for (int i = start; i < candidates.size(); i++) {
			if (target - candidates[i] >= 0) {
				nums.push_back(candidates[i]);
				solve(candidates, nums, target - candidates[i], i);
				nums.erase(nums.end()-1);
			}
			else {
				break;
			}		 
		}
	}
};