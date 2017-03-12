#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<int> v = {1, 2, 3, 4, 3, 2, 1};
	cout << s.singleNumber(v) << endl;
	return 0;
}
