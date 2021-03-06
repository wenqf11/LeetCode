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
	int findMin(vector<int>& nums) {
		int left = 0, right = nums.size() - 1;
		if (nums.size() == 0) return 0;
		int mid = 0;
		while (left < right) {
			mid = (left + right) / 2;
			if (nums[mid] > nums[right]) {
				left = mid + 1;
			} else if (nums[mid] < nums[right]) {
				right = mid;
			} else {
				right --;
			}
		}
		return nums[left];
	}
};