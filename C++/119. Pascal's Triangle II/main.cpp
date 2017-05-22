#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	
	int nRows = 5;
	vector<int> res = s.getRow(nRows);

	for (int i = 0; i <= nRows; i++) {
		cout << res[i] << " ";
	}
	return 0;
}
