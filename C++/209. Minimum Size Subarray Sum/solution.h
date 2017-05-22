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
#include <unordered_map>
using namespace std;


class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int res = INT_MAX, left = 0, sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			while (left <= i && sum >= s) {
				res = min(res, i - left + 1);
				sum -= nums[left];
				left++;
			}
		}
		return res == INT_MAX ? 0 : res;
	}
};