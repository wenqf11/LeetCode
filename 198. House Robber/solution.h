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
	int rob(vector<int> &nums) {
		int a = 0, b = 0;
		for (int i = 0; i < nums.size(); ++i) {
			int m = a, n = b;
			a = n + nums[i];
			b = max(m, n);
		}
		return max(a, b);
	}
};