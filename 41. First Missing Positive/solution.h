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
	int firstMissingPositive(vector<int>& nums) {
		int i = 0, n = nums.size();
		while (i < n)
		{
			if (nums[i] != (i + 1) && nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
				swap(nums[i], nums[nums[i] - 1]);
			else
				i++;
		}
		for (i = 0; i < n; ++i)
			if (nums[i] != (i + 1))
				return i + 1;
		return n + 1;
	}
};