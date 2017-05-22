#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	vector<int> res;
	res = s.diffWaysToCompute("2-1-1");
	for (auto i : res) {
		cout << i << " ";
	}
	cout << endl;
}