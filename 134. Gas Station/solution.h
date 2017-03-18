#pragma once
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
		int totalGas = 0, totalCost = 0;
		int begin = 0, tankGas = 0;
		for (int i = 0; i < gas.size(); i++) {
			totalGas += gas[i];
			totalCost += cost[i];
			tankGas += gas[i] - cost[i];
			if (tankGas < 0) {
				begin = i + 1;
				tankGas = 0;
			}
		}
		return (totalGas >= totalCost ? begin : -1);
	}
};