#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<int> v = {20, 1, 4, 5, 3, 10, 2};
	cout << s.longestConsecutive(v) << endl;
	return 0;
}
