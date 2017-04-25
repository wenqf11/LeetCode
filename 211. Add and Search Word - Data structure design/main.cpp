#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	WordDictionary* obj = new WordDictionary();
	string word = "abcd";
	obj->addWord(word);
	bool param_2 = obj->search("");
	cout << param_2 << endl;
	return 0;
}
