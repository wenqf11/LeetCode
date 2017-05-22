#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_map<int, bool> map;
		for (int i = 0; i < nums.size(); i++) {
			if (map[nums[i]]) {
				return true;
			} else {
				map[nums[i]] = true;
			}
		}
		return false;
	}
};