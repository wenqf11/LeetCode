#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(-2);
	nums.push_back(4);
	//vector< vector<int> > a = {{1, 3, 1 }, {1, 5, 1 }, { 4, 2, 1 }};
	cout << s.maxProduct(nums);
	return 0;
}
