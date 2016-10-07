#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include <stack>  
using std::string;
using std::vector;
using std::stack;

class Solution {
public:
	int divide(int dividend, int divisor) {
		long long divide = dividend > 0 ? dividend : -(long long)dividend;
		long long divis = divisor > 0 ? divisor : -(long long)divisor;
		
		long long ans = 0;
		while (divide >= divis) {
			long long tmp = divis;
			long long i = 1;
			while (tmp <= divide) {
				tmp <<= 1;
				++i;
			}
			ans += (1LL << (i - 2));
			divide -= (divis << (i - 2));
		}
		
		if (dividend > 0 ^ divisor > 0) {
			ans = -ans;
		}
		if (ans > INT32_MAX) return INT32_MAX;
		else return ans;
	}
};