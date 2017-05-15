#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	vector< vector<int> > nums(2, vector<int>(2, 0));
	nums[0][0] = 0;
	nums[0][1] = 1;
	nums[1][0] = 3;
	nums[1][1] = 4;
	cout << s.searchMatrix(nums, 3);
}