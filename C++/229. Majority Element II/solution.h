#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {
		vector<int> res;
		if (nums.size() == 0) return res;
		int maxN = 0, sMaxN = 0, a = 0, b = 0;

		maxN = sMaxN = nums[0];
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == maxN) {
				a++;
			} else if (nums[i] == sMaxN) {
				b++;
			} else if (a == 0) {
				maxN = nums[i];
				a++;
			} else if (b == 0) {
				sMaxN = nums[i];
				b++;
			} else {
				a--;
				b--;
			}
		}

		a = b = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (maxN == nums[i]) ++a;
			else if (sMaxN == nums[i]) ++b;
		}
		if (a > nums.size() / 3) res.push_back(maxN);
		if (b > nums.size() / 3) res.push_back(sMaxN);
		return res;
	}
};