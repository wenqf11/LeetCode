#include <iostream>
#include "solution.h"

// Unit Test


int main() {
	Solution s;
	vector<int> gas = {1, 2, 3, 4};
	vector<int> cost = {1, 2, 4, 4};

	cout << s.canCompleteCircuit(gas, cost) << endl;

	return 0;
}
