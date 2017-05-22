#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<vector<char>> v = {
		{'X', 'X', 'X', 'X'},
		{'X', 'O', 'O', 'X'},
		{'X', 'X', 'O', 'X'},
		{'X', 'O', 'X', 'X'}
	};
	s.solve(v);
	for (int i = 0; i < v.size(); i ++) {
		for (int j = 0; j < v[0].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
