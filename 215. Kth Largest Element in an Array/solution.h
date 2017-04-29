#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		return findKthBySort(nums, 0, nums.size() - 1, k);
	}

	int findKthBySort(vector<int>& nums, int left, int right, int k) {
		int l = left;
		int r = right;
		int mid = nums[(l + r) / 2];
		while (l <= r) {
			while (nums[l] > mid) l++;
			while (nums[r] < mid) r--;
			if (l <= r) {
				swap(nums[l], nums[r]);
				l++;
				r--;
			}
		}

		if (left + k - 1 <= r) return findKthBySort(nums, left, r, k);
		if (left + k - 1 < l) return nums[left + k - 1];
		return findKthBySort(nums, l, right, k - (l - left));
	}
};