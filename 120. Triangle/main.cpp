#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	
	vector<vector<int>> v;
	v.push_back({1});
	v.push_back({2,3});

	cout << s.minimumTotal(v) << endl;
	return 0;
}
