#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<int> nums = { 2,3,1,1,4 };
	cout << s.isMatch("aaaabbaa","*b*a*aa");
	system("pause");
	return 0;
}