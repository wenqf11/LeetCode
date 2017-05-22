#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	s.nextPermutation(v);
	system("pause");
	return 0;
}