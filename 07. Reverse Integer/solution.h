#pragma once
#include<vector>
#include<string>
#include<climits>
using std::string;
using std::vector;


class Solution {
public:
	int reverse(int x) {
		int y = x;
		if (y < 0) y = -y;
		long ans = 0;
		while (y > 0) {
			ans = ans * 10 + y % 10;
			y = y / 10;
		}
		
		if (x < 0) ans = -ans;
		if (ans > INT_MAX || ans < INT_MIN) {
			return 0;
		}
		
		return ans;
	}
};