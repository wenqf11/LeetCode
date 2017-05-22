#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;


class Solution {
private:
	vector<vector<int>> res;
public:
	vector<vector<int>> combinationSum3(int k, int n) {
		vector<int> combination;
		for (int i = 1; i <= 9; i++) {
			getCombinations(k, n - i, i, combination);
		}
		return res;
	}

	void getCombinations(int & k, int n, int last, vector<int> combination) {
		combination.push_back(last);
		if (n < 0) return;
		if (n == 0 && combination.size() == k) res.push_back(combination);
		for (int i = last + 1; i <= 9; i++) {
			getCombinations(k, n - i, i, combination);
		}
	}
};