#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<int> num = { -2,1,-3,4,-1,2,1,-5,4 };
	cout << s.maxSubArray(num);
	system("pause");
	return 0;
}