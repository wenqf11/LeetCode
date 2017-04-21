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
	void bfs(vector< vector<char> >& grid, int x, int y) {
		if (x < 0 || x >= grid.size()) return;
		if (y < 0 || y >= grid[0].size()) return;
		if (grid[x][y] == '0') return;
		grid[x][y] = '0';
		bfs(grid, x - 1, y);
		bfs(grid, x + 1, y);
		bfs(grid, x, y - 1);
		bfs(grid, x, y + 1);
	}

	int numIslands(vector< vector<char> >& grid) {
		int m = grid.size();
		if (m == 0) return 0;
		int n = grid[0].size();
		if (n == 0) return 0;

		int ans = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) {
				if (grid[i][j] == '1') {
					bfs(grid, i, j);
					ans++;
				}
			}
		return ans;
	}
};