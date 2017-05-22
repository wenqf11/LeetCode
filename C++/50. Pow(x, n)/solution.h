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
	double myPow(double x, int n) {
		double ans = 0;
		if (n >= 0) {
			ans = fastPow(x, n);
		} else {
			long long p = n;
			p = -p;
			ans = fastPow(x, p);
			ans = 1.0 / ans;
		}
		return ans;
	}

	double fastPow(double x, long long n) {
		double ans = 0;
		if (n == 0) return 1;
		if (n == 1) return x;
		if (n % 2 == 1) {
			ans = fastPow(x, n / 2);
			ans = ans * ans * x;
		}
		else {
			ans = fastPow(x, n / 2);
			ans = ans * ans;
		}
		return ans;
	}
};