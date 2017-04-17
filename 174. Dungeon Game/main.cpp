#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector< vector<int> > nums(3, vector<int>(3, 0));
	nums[0][0] = 1;
	nums[0][1] = -3;
	nums[0][2] = 3;
	nums[1][0] = 0;
	nums[1][1] = -2;
	nums[1][2] = 0;
	nums[2][0] = -3;
	nums[2][1] = -3;
	nums[2][2] = -3;
	cout << s.calculateMinimumHP(nums);
	return 0;
}
