#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(3);
	v.push_back(1);
	cout<<s.search(v, 3);
	system("pause");
	return 0;
}