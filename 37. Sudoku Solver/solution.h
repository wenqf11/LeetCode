#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<stack>  
#include<unordered_map>
using std::string;
using std::vector;
using std::stack;
using std::unordered_map;

class Solution {
public:
	void solveSudoku(vector<vector<char>>& board) {
		solve(board, 0, 0);
	}

	bool solve(vector<vector<char>>& board, int i, int j) {
		if (j >= 9) {
			i = i + 1; 
			j = 0;
		}
		if (i == 9) {
			return true;
		}
		if (board[i][j] == '.')
		{
			for (int k = 1; k <= 9; k++)
			{
				board[i][j] = (char)(k + '0');
				if (isValid(board, i, j))
				{
					if (solve(board, i, j + 1))
						return true;
				}
				board[i][j] = '.';
			}
		} else {
			return solve(board, i, j + 1);
		}
		return false;
	}

	bool isValid(vector<vector<char>>& board, int i, int j) {
		for (int k = 0; k<9; k++){
			if (k != j && board[i][k] == board[i][j]) return false;
		}
		for (int k = 0; k<9; k++){
			if (k != i && board[k][j] == board[i][j]) return false;
		}

		for (int row = i / 3 * 3; row < i / 3 * 3 + 3; row++)
			for (int col = j / 3 * 3; col<j / 3 * 3 + 3; col++){
				if ((row != i || col != j) && board[row][col] == board[i][j]) return false;
			}
		return true;
	}
};