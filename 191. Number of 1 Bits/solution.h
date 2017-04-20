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
	int hammingWeight(uint32_t n) {
		uint32_t k = 1;
		int ans = 0;
		for (int i = 0; i < 32; i++) {
			if (i == 0) {
				k = 1;
			} else {
				k = k << 1;
			}
			ans += ((n & k) > 0);
		}
		return ans;
	}
};