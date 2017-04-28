#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector< vector<int> >  res = s.combinationSum3(3, 9);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[0].size(); j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
