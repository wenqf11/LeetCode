#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> Height;
	/*Height.push_back(-1);
	Height.push_back(-2);
	Height.push_back(3);
	Height.push_back(0);
	Height.push_back(1);
	Height.push_back(2);
	Height.push_back(-3);*/
	vector<vector<int>> ans = s.threeSum(Height);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++)
			std::cout << ans[i][j] << " ";
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}