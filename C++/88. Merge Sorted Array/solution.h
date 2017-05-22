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
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		if (nums2.size() == 0) return;
		int i = 0, j = 0, k =0;
		vector<int> nums(m + n, 0);
		while (i < m || j < n) {
			if ((i < m && nums1[i] <= nums2[j]) || j>=n) {
				nums[k] = nums1[i];
				k++;
				i++;
			} else {
				nums[k] = nums2[j];
				k++;
				j++;
			}
		}
		for (int i = 0; i < m + n; i++) {
			nums1[i] = nums[i];
		}
	}
};