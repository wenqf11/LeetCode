#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<string> wordDict = {"leet", "code"};
	cout << s.wordBreak("leetcode", wordDict);
	return 0;
}
