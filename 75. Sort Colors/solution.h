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
	void quick_sort(vector<int>& nums, int l, int r) {
		int left = l, right = r;
		int mid = nums[(l + r) / 2];
		while (left <= right) {
			while (nums[left] < mid) left++;
			while (nums[right] > mid) right--;
			if (left <= right) {
				int temp = nums[left];
				nums[left] = nums[right];
				nums[right] = temp;
				left++;
				right--;
			}
		}
		if (l <= right) quick_sort(nums, l, right);
		if (left <= r) quick_sort(nums, left, r);
	}
	void sortColors(vector<int>& nums) {
		quick_sort(nums, 0, nums.size()-1);
	}
};