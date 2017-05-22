#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	int a[] = {1, 3, -1, -3, 5, 3, 6, 7};
	vector<int> nums(a, a + 8);
	vector<int> res = s.maxSlidingWindow(nums, 3);
	for (auto i : res) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
