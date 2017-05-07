#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(1);
	s.majorityElement(nums);
	return 0;
}
