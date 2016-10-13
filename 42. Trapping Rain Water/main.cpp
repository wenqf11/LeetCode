#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<int> h;
	h.push_back(2);
	h.push_back(0);
	h.push_back(2);
	cout << s.trap(h);
	system("pause");
	return 0;
}