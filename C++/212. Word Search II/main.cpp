#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector< vector<char> > board(4, vector<char>(4, 0));
	vector<string> words;

	board[0][0] = 'o';
	board[0][1] = 'a';
	board[0][2] = 'a';
	board[0][3] = 'n';

	board[1][0] = 'e';
	board[1][1] = 't';
	board[1][2] = 'a';
	board[1][3] = 'e';

	board[2][0] = 'i';
	board[2][1] = 'h';
	board[2][2] = 'k';
	board[2][3] = 'r';

	board[3][0] = 'i';
	board[3][1] = 'f';
	board[3][2] = 'l';
	board[3][3] = 'v';

	words.push_back("oath");
	words.push_back("pea");
	words.push_back("eat");
	words.push_back("eat");
	words.push_back("rain");

	vector<string> res = s.findWords(board, words);

	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << ",";
	}
	cout << endl;
	return 0;
}
