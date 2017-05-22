#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include <stack>  
using std::string;
using std::vector;
using std::stack;

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		bool f[9];
		for (int i = 0; i < 9; i++) {
			memset(f, 0, sizeof(bool) * 9);
			for (int j = 0; j < 9; j++)
				if (isUsed(board[i][j], f)) {
					return false;
				}
			memset(f, 0, sizeof(bool) * 9);
			for (int j = 0; j < 9; j++)
				if (isUsed(board[j][i], f)) {
					return false;
				}
		}

		for(int r = 0; r < 3; r++)
			for (int c = 0; c < 3; c++) {
				memset(f, 0, sizeof(bool) * 9);
				for (int i = r * 3; i < r * 3 + 3; ++i)
					for (int j = c * 3; j < c * 3 + 3; ++j)
						if (isUsed(board[i][j], f))
							return false;
			}
		return true;
	}

	bool isUsed(char ch, bool used[9]) {
		if (ch == '.') return false;
		if (used[ch - '1']) return true;
		used[ch - '1'] = true;
		return false;
	}
};