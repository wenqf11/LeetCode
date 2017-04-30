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
	int maximumGap(vector<int>& nums) {
		if (nums.size() < 2) return 0;
		int maxNum = nums[0];
		int minNum = nums[0];
		for (int i : nums) {
			maxNum = max(maxNum, i);
			minNum = min(minNum, i);
		}

		int len = (maxNum - minNum) / nums.size() + 1;

		vector<vector<int>> buckets((maxNum - minNum) / len + 1);
		for (int x : nums) {
			int i = (x - minNum) / len;
			if (buckets[i].empty()) {
				buckets[i].reserve(2);
				buckets[i].push_back(x);
				buckets[i].push_back(x);
			} else {
				if (x < buckets[i][0]) buckets[i][0] = x;
				if (x > buckets[i][1]) buckets[i][1] = x;
			}
		}

		int gap = 0;
		int prev = 0;
		for (int i = 1; i < buckets.size(); i++) {
			if (buckets[i].empty()) continue;
			gap = max(gap, buckets[i][0] - buckets[prev][1]);
			prev = i;
		}
		return gap;
	}
};