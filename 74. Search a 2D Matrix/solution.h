#pragma once
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


class Solution {
public:
	bool searchMatrix(vector<vector<int> > &matrix, int target) {
		int n = matrix.size();
		if (n == 0) {
			return false;
		}

		int m = matrix[0].size();
		if (m == 0) {
			return false;
		}

		int start = 0, end = n * m - 1;
		while (start <= end) {
			int mid = (start + end) / 2;
			int row = mid / m;
			int col = mid % m;

			if (matrix[row][col] == target) {
				return true;
			}

			if (matrix[row][col] < target) {
				start = mid+1;
			} else {
				end = mid-1;
			}
		}

		return false;
	}
};