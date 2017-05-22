#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(30);
	nums.push_back(34);
	nums.push_back(5);
	nums.push_back(9);
	cout << s.largestNumber(nums) << endl;
	return 0;
}
