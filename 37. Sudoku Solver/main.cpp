#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<vector<char>> v;
	//["..9748...", "7........", ".2.1.9...", "..7...24.", ".64.1.59.", ".98...3..", "...8.3.2.", "........6", "...2759.."];
	v.push_back({ '.','.','9','7','4','8','.','.','.' });
	v.push_back({ '7','.','.','.','.','.','.','.','.' });
	v.push_back({ '.','2','.','1','.','9','.','.','.' });
	v.push_back({ '.','.','7','.','.','.','2','4','.' });
	v.push_back({ '.','6','4','.','1','.','5','9','.' });
	v.push_back({ '.','9','8','.','.','.','3','.','.' });
	v.push_back({ '.','.','.','8','.','3','.','2','.' });
	v.push_back({ '.','.','.','.','.','.','.','.','6' });
	v.push_back({ '.','.','.','2','7','5','9','.','.' });

	s.solveSudoku(v);
	system("pause");
	return 0;
}