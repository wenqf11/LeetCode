#pragma once
#include<vector>
using std::vector;


class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> merge(nums1.size() + nums2.size(), 0);
		int l = 0, i = 0, j = 0;
		while (l < merge.size()) {
			if (i >= nums1.size()) {
				merge[l] = nums2[j];
				++j;
			}else if (j >= nums2.size()) {
				merge[l] = nums1[i];
				++i;
			}else if (nums1[i] <= nums2[j]) {
				merge[l] = nums1[i];
				++i;
			}
			else {
				merge[l] = nums2[j];
				++j;
			}
			++l;
		}
		
		double ans = 0;
		if (merge.size() % 2 == 1) {
			ans = merge[merge.size() / 2];
		}
		else {
			ans = (merge[merge.size() / 2] + merge[merge.size() / 2 - 1]) / 2.0;
		}
		return ans;
	}
};