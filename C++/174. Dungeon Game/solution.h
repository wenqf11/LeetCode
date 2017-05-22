#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;



class Solution {
public:
	int calculateMinimumHP(vector< vector<int> >& dungeon) {
		int m = dungeon.size(), n = dungeon[0].size();
		vector< vector<int> > f(m, vector<int>(n, 0));

		f[m - 1][n - 1] = max(1, 1 - dungeon[m - 1][n - 1]);

		for (int i = m - 2; i >= 0; --i) {
			f[i][n - 1] = max(1, f[i + 1][n - 1] - dungeon[i][n - 1]);
		}
		for (int j = n - 2; j >= 0; --j) {
			f[m - 1][j] = max(1, f[m - 1][j + 1] - dungeon[m - 1][j]);
		}
		for (int i = m - 2; i >= 0; --i) {
			for (int j = n - 2; j >= 0; --j) {
				f[i][j] = max(1, min(f[i + 1][j], f[i][j + 1]) - dungeon[i][j]);
			}
		}
		return f[0][0];
	}
};