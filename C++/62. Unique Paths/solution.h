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
	int uniquePaths(int m, int n) {
		m--;
		n--;
		int minMN = min(m, n), s = m + n;
		long long ans = 1;
		for (int i = s; i > s - minMN; i--) {
			ans *= i;
		}
		for (int i = 2; i <= minMN; i++) {
			ans /= i;
		}
		return ans;
	}
};