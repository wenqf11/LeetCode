#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	
	vector<int> prices = {1, 2, 5, 7, 6};

	cout << s.maxProfit(prices) << endl;
	return 0;
}
