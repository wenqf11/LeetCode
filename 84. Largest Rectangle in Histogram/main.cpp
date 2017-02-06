#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<int> heights = { 1, 2, 3, 4, 5 };
	cout<<s.largestRectangleArea(heights);
	system("pause");
	return 0;
}