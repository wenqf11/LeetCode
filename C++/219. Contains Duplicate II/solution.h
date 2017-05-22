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
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int, vector<int> > map;
		for (int i = 0; i < nums.size(); i++) {
			if (map[nums[i]].size() != 0) {
				for (int j = 0; j < map[nums[i]].size(); j++) {
					if (abs(map[nums[i]][j] - i) <= k) {
						return true;
					}
				}
				map[nums[i]].push_back(i);
			} else {
				map[nums[i]].push_back(i);
			}
		}
		return false;
	}
};