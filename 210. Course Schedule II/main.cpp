#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector< pair<int, int> > nums;
	nums.push_back(make_pair(1, 0));
	nums.push_back(make_pair(0, 1));
	s.findOrder(2, nums);
	return 0;
}
