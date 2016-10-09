#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	std::cout<<s.search(v, 6);
	system("pause");
	return 0;
}