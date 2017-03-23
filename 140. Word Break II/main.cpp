#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<string> wordDict = {"cat", "cats", "and", "sand", "dog"};
	vector<string> res = s.wordBreak("catsanddog", wordDict);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	return 0;
}
