#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<vector<int>> matrix;
	matrix.push_back({1, 2});
	matrix.push_back({3, 4});
	s.rotate(matrix);
	system("pause");
	return 0;
}