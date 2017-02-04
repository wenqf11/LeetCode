#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	s.removeDuplicates(v);
	system("pause");
	return 0;
}