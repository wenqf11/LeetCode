#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<vector<int>> a = {{1,3,1 }, {1, 5, 1 }, { 4,2,1 }};

	cout<<s.minPathSum(a);
	system("pause");
	return 0;
}