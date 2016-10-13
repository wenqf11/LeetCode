#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> candidates;
	candidates.push_back(2);
	candidates.push_back(2);
	candidates.push_back(2);
	vector<vector<int>> ans = s.combinationSum2(candidates,4);
	system("pause");
	return 0;
}