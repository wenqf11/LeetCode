#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<stack>  
#include<unordered_map>
using std::string;
using std::vector;
using std::stack;
using std::unordered_map;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		vector<int> ans;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (nums[mid] == target) {
				if (mid == 0 || nums[mid - 1] < nums[mid]) {
					ans.push_back(mid);
					break;
				} else {
					r = mid - 1;
				}
			}			else if (nums[mid] < target) {
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}

		l = 0, r = nums.size() - 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (nums[mid] == target) {
				if (mid == nums.size()-1 || nums[mid + 1] > nums[mid]) {
					ans.push_back(mid);
					break;
				}
				else {
					l = mid + 1;
				}
			}
			else if (nums[mid] < target) {
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
		if (ans.size() == 0) {
			ans.push_back(-1);
			ans.push_back(-1);
		}
		return ans;
	}
};