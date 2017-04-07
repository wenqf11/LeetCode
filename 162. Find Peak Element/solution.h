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
	int findPeakElement(vector<int>& nums) {
		int left = 0, right = nums.size() - 1;
		int mid = 0;
		while (left <= right) {
			mid = (left + right) / 2;
			if (left == right) return left;
			if (nums[mid] < nums[mid + 1]) {
				left = mid + 1;
			} else {
				right = mid;
			}
		}
		return mid;
	}
};