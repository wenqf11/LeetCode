#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<vector<char>> matrix = { {'1','0','1','0','0' }, { '1','0','1','1','1' },
	{ '1','1','1','1','1' },{ '1','0','0','1','0' } };
	cout<<s.maximalRectangle(matrix);
	system("pause");
	return 0;
}