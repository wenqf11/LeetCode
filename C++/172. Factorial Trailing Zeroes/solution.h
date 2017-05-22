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
	int trailingZeroes(int n) {
		long d = 5;
		int ans = 0;
		while (n >= d) {
			ans += n / d;
			d = d * 5;
		}
		return ans;
	}
};