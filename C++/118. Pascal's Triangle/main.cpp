#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
    	
	int nRows = 5;
	vector<vector<int>> res = s.generate(nRows);

	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
