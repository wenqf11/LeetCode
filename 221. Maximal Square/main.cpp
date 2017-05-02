#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector< vector<char> > matrix(4, vector<char>(5, 0));
	matrix[0][0] = '1';
	matrix[0][1] = '0';
	matrix[0][2] = '1';
	matrix[0][3] = '0';
	matrix[0][4] = '0';

	matrix[1][0] = '1';
	matrix[1][1] = '0';
	matrix[1][2] = '1';
	matrix[1][3] = '1';
	matrix[1][4] = '1';

	matrix[2][0] = '1';
	matrix[2][1] = '1';
	matrix[2][2] = '1';
	matrix[2][3] = '1';
	matrix[2][4] = '1';

	matrix[3][0] = '1';
	matrix[3][1] = '0';
	matrix[3][2] = '0';
	matrix[3][3] = '1';
	matrix[3][4] = '0';

	cout << s.maximalSquare(matrix) << endl;
	return 0;
}
