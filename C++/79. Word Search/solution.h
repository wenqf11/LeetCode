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
	bool searchWord(vector<vector<char>>& board, vector<vector<bool>>& used, string &word, int x, int y, int k) {
		if (x>=board.size()||x<0||y>= board[0].size() ||
			y<0||used[x][y]||board[x][y] != word[k]) return false;
		if (k == word.size() - 1) return true;
		

		bool result = false;

		used[x][y] = true;
		result = searchWord(board, used, word, x+1, y, k + 1)||
			searchWord(board, used, word, x-1, y, k + 1)||
			searchWord(board, used, word, x, y+1, k + 1)||
			searchWord(board, used, word, x, y-1, k + 1);
		used[x][y] = false;

		return result;
	}
	bool exist(vector<vector<char>>& board, string word) {
		bool result = false;
		vector<vector<bool>> used(board.size(), vector<bool>(board[0].size()));
		for (int i = 0; i < used.size(); i++)
			for (int j = 0; j < used[0].size(); j++) {
				used[i][j] = false;
			}
		for (int i = 0; i < board.size(); i++)
			for (int j = 0; j < board[0].size(); j++) {
				if (searchWord(board, used, word, i, j, 0)) return true;
			}
		return false;
	}
};