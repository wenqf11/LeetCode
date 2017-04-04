#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	string st = "the sky is blue";
	s.reverseWords(st);
	cout << st << endl;
	return 0;
}
