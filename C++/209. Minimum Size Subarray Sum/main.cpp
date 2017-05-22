#include <iostream>
#include "solution.h"

// Unit Test

int main() {

	Solution s;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(3);
	s.minSubArrayLen(7, nums);
	return 0;
}
