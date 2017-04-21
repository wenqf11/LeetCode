#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector< vector<char> > grid(4, vector<char>(5));
	//char c[] = {'1', '1', '1', '1', '0'};
	//grid[0] = c;
	cout << s.numIslands(grid) << endl;
	return 0;
}
