#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:

	bool searchMatrix(vector< vector<int> >& matrix, int target) {
		if (matrix.size() == 0 || matrix[0].size() == 0) return 0;
		int m = matrix.size(), n = matrix[0].size();
		if (target < matrix[0][0] || target > matrix[m - 1][n - 1]) return false;
		int x = m - 1, y = 0;
		while (true) {
			if (matrix[x][y] > target) --x;
			else if (matrix[x][y] < target) ++y;
			else return true;
			if (x < 0 || y >= matrix[0].size()) break;
		}
		return false;
	}
};