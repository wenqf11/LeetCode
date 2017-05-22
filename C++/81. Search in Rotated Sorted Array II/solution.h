#pragma once
#include<vector>
#include<string>
#include<cstring>
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
	bool search(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1, mid;
		while (l <= r) {
			mid = (l + r) / 2;
			if (target == nums[mid]) return true;
			if (nums[l] == nums[mid]) l++;
			else if (nums[mid] <= nums[r]) {
				if (nums[mid] <= target&&target <= nums[r]) {
					l = mid + 1;
				}
				else {
					r = mid - 1;
				}
			} else {
				if (nums[l] <= target && target<nums[mid])
					r = mid - 1;
				else
					l = mid + 1;
			}
		}
		return false;
	}
};