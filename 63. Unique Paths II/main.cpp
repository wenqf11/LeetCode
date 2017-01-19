#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<vector<int>> a(5, vector<int>(5));
	cout<<s.uniquePathsWithObstacles(a);
	system("pause");
	return 0;
}