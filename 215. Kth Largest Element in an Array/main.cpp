#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(3);
	cout << s.findKthLargest(nums, 1) << endl;
	return 0;
}
