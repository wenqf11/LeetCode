#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	int n[] = { 1, 2};
	int m[] = { 3, 4};
	std::vector<int> a(n, n + 2);
	std::vector<int> b(m, m+2);
	std::cout << s.findMedianSortedArrays(a, b)<< std::endl;
	system("pause");
	return 0;
}