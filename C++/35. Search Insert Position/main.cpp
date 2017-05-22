#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> v;
	v.push_back(5);
	v.push_back(7);
	v.push_back(9);
	v.push_back(18);
	std::cout << s.searchInsert(v, 0);
	system("pause");
	return 0;
}