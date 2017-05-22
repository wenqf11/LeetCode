#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<string> words = {"hot", "dot", "dog", "lot", "log", "cog"};
	string beginWord = "hit", endWord = "cog";

	s.ladderLength(beginWord, endWord, words);
	return 0;
}
