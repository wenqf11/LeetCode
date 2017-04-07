#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<int> nums;
	nums.push_back(1);
	//nums.push_back(2);
	cout << s.findPeakElement(nums) << endl;
	return 0;
}
