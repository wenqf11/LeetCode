#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<int> v = { 1,2,2 };
	vector<vector<int>> res = s.subsetsWithDup(v);
	system("pause");
	return 0;
}