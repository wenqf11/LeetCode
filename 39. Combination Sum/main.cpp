#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> candidates;
	candidates.push_back(2);
	candidates.push_back(3);
	candidates.push_back(6);
	candidates.push_back(7);
	vector<vector<int>> ans = s.combinationSum(candidates,7);
	system("pause");
	return 0;
}