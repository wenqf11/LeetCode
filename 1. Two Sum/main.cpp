#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	int n[] = { 1, 2, 3, 4, 8 };
	std::vector<int> a(n, n + 5);
	std::cout << s.twoSum(a, 7)[0] << std::endl;
	std::cout << s.twoSum(a, 7)[1] << std::endl;
	system("pause");
	return 0;
}