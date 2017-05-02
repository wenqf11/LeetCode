#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector< vector<int> > buildings;
	vector< pair<int, int> > res = s.getSkyline(buildings);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i].first << " " << res[i].second << endl;
	}
	return 0;
}
