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
	void setZeroes(vector<vector<int>>& matrix) {
		int row = matrix.size();
		if (row == 0) return;
		int col = matrix[0].size();
		bool firstRowhasZero = false;
		bool firstColhasZero = false;

		for (int i = 0; i < row; i++)
			if (matrix[i][0] == 0) {
				firstColhasZero = true;
				break;
			}

		for (int i = 0; i < col; i++)
			if (matrix[0][i] == 0) {
				firstRowhasZero = true;
				break;
			}

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (matrix[i][j] == 0) {
					matrix[i][0] = 0;
					matrix[0][j] = 0;
				}
			}
		}

		for (int i = 1; i < row; i++) {
			if (matrix[i][0] == 0) {
				for (int j = 1; j < col; j++) {
					matrix[i][j] = 0;
				}
			}
		}
		for (int j = 1; j < col; j++) {
			if (matrix[0][j] == 0) {
				for (int i = 1; i < row; i++) {
					matrix[i][j] = 0;
				}
			}
		}

		if (firstColhasZero) {
			for (int i = 0; i < row; i++) {
				matrix[i][0] = 0;
			}
		}

		if (firstRowhasZero) {
			for (int i = 0; i < col; i++) {
				matrix[0][i] = 0;
			}
		}
	}
};