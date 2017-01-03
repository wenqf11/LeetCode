#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.size() == 0)  return 0;

		int *f = new int[nums.size()];
		int *ind = new int[nums.size()];
		int maxSum = 0;
		
		f[0] = nums[0];
		ind[0] = 0;
		maxSum = f[0];
		
		for (int i = 1; i < nums.size(); i++) {
			if (f[i - 1] > 0) {
				f[i] = f[i - 1] + nums[i];
				ind[i] = ind[i-1];
			}
			else {
				f[i] = nums[i];
				ind[i] = i;
			}
			if (f[i] > maxSum) {
				maxSum = f[i];
			}
		}
		
		delete[] f;
		delete[] ind;
		return maxSum;
	}
};