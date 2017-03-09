#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	
	vector<int> prices = {1, 4, 2};

	cout << s.maxProfit(prices) << endl;
	return 0;
}
