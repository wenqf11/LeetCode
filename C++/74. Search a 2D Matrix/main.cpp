#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<vector<int>> nums = { { 1,2,3 },{ 4,5,6 } };
	cout << s.searchMatrix(nums, 5);
	system("pause");
	return 0;
}