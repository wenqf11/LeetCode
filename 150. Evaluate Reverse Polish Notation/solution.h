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
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> operand;
		set<string> operators;
		operators.insert("+");
		operators.insert("-");
		operators.insert("*");
		operators.insert("/");

		for (int i = 0; i < tokens.size(); i++) {
			if (operators.find(tokens[i]) == operators.end()) {
				operand.push(atoi(tokens[i].c_str()));

			} else {
				int operand2 = operand.top();
				operand.pop();
				int operand1 = operand.top();
				operand.pop();
				int res = 0;
				if (tokens[i] == "+") {
					res = operand1 + operand2;
				} else if (tokens[i] == "-") {
					res = operand1 - operand2;
				} else if (tokens[i] == "*") {
					res = operand1 * operand2;
				} else if (tokens[i] == "/") {
					res = operand1 / operand2;
				}
				operand.push(res);
			}
		}
		return operand.top();
	}
};