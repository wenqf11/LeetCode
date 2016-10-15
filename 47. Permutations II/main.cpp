#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	vector<vector<int>>ans = s.permuteUnique(nums);
	system("pause");
	return 0;
}