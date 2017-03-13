#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<vector<string>> ans = s.partition("aab");
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
