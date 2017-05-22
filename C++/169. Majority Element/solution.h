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
	int majorityElement(vector<int>& nums) {
		unordered_map<int, int> map;
		int n = nums.size(), ans = 0;
		for (int i = 0; i < n; i++) {
			map[nums[i]]++;
			if (map[nums[i]] > n / 2) {
				ans = nums[i];
				return ans;
			}
		}
		return ans;
	}
};