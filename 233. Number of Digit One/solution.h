#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution {
public:
	int countDigitOne(int n) {
		int nums = 0;
		for (long i = 1; i <= n; i *= 10) {
			int a = n / i, b = n % i;
			nums += (a + 8) / 10 * i;
			if (a % 10 == 1) nums += b + 1;
		}
		return nums;
	}
};