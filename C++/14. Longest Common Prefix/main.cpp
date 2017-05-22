#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<string> strs;
	strs.push_back("12343");
	strs.push_back("12343");
	strs.push_back("1234311");
	strs.push_back("123");
	std::cout << s.longestCommonPrefix(strs)<< std::endl;
	system("pause");
	return 0;
}