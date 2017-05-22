#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	vector<int> nums;
	nums.push_back(0);
	vector<string> res = s.summaryRanges(nums);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	return 0;
}
