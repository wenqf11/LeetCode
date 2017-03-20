#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int one = 0;
		int two = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			two = two | (one & nums[i]);
			one = one ^ nums[i];

			int three = two & one;
			two = two ^ three;
			one = one ^ three;
		}

		return one | two;
	}
};