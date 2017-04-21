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
	int rangeBitwiseAnd(int m, int n) {
		long ans = m, k = 0;
		for (long i = m; i <= n; i++) {
			ans = ans & i;
			//if (ans == 0) return 0;
		}
		return ans;
	}
};