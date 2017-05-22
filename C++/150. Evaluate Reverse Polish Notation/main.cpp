#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<string> tokens(3);
	tokens.push_back("1");
	tokens.push_back("2");
	tokens.push_back("+");
	tokens.push_back("3");
	tokens.push_back("*");
	cout << s.evalRPN(tokens) << endl;
	return 0;
}
