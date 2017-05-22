#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


class Solution {
public:
	int climbStairs(int n) {
		int f[3];
		f[0] = 0;
		f[1] = 1;
		f[2] = 2;
		for (int i = 3; i <= n; i++) {
			f[i % 3] = f[(i - 1) % 3] + f[(i - 2) % 3];
		}
		return f[n % 3];
	}
};