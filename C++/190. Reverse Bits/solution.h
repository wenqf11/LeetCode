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
	uint32_t reverseBits(uint32_t n) {
		uint32_t ans;
		for (int i = 0; i < 32; i++) {
			if (n & 1) {
				ans = (ans << 1) + 1;
			} else {
				ans = ans << 1;
			}
			n = n >> 1;
		}
		return ans;
	}
};