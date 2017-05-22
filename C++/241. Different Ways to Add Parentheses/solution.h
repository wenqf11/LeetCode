#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
private:
	int calculate(int a, int b, char ch) {
		switch (ch) {
		case '+': return a + b; break;
		case '-': return a - b; break;
		case '*': return a * b; break;
		default: return 0;
		}
	}
public:
	vector<int> diffWaysToCompute(string input) {
		vector<int> res;
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '+' || input[i] == '-' ||  input[i] == '*') {
				vector<int> left = diffWaysToCompute(input.substr(0, i));
				vector<int> right = diffWaysToCompute(input.substr(i + 1));
				for (auto j : left) {
					for (auto k : right) {
						res.push_back(calculate(j, k, input[i]));
					}
				}
			}
		}

		if (res.empty()) res.push_back(atoi(input.c_str()));

		return res;
	}
};