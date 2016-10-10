#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> v;
	v.push_back(5);
	v.push_back(7);
	v.push_back(8);
	v.push_back(8);
	vector<int> ans = s.searchRange(v, 7);
	for (int i = 0; i < ans.size(); i++)
		std::cout << ans[i] << " ";
	system("pause");
	return 0;
}