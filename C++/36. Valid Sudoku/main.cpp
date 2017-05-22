#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector <vector<char>> board(9, vector<char>(9,'.'));
	std::cout<<s.isValidSudoku(board);
	system("pause");
	return 0;
}