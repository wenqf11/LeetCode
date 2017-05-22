#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> Height;
	Height.push_back(-1);
	Height.push_back(-2);
	Height.push_back(3);
	Height.push_back(0);
	Height.push_back(1);
	Height.push_back(2);
	Height.push_back(-3);

	std::cout << s.threeSumClosest(Height, 2) << std::endl;

	system("pause");
	return 0;
}