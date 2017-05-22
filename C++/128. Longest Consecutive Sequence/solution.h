#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <unordered_set>
#include <cmath>
using namespace std;


class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		unordered_set<int> s(nums.begin(), nums.end());
		int ans = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (s.count(nums[i]) == 0) continue;
			s.erase(nums[i]);
			int prev = nums[i] - 1, next = nums[i] + 1;
			while (s.count(prev)) {
				s.erase(prev);
				prev--;
			}

			while (s.count(next)) {
				s.erase(next);
				next++;
			}
			ans = max(ans, next - prev - 1);
		}
		return ans;
	}
};