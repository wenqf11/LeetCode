#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<vector<char>> board = {
		{'a','a','a','a'},
		{'a','a','a','a' },
		{'a','a','a','a' }
	};
	cout<<s.exist(board, "aaaaaaaaaaaaa");
	system("pause");
	return 0;
}