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
	int countPrimes(int n) {
		vector<bool> f(n, true);
		f[1] = false;
		int res = 0, limit = sqrt(n);
		for (int i = 2; i <= limit; ++i) {
			if (f[i]) {
				for (int j = i * i; j < n; j += i) {
					f[j] = false;
				}
			}
		}
		for (int j = 1; j < n; ++j) {
			if (f[j]) ++res;
		}
		return res;
	}
};