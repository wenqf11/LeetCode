#include <iostream>
#include "solution.h"

// Unit Test

int main() {

	Trie* obj = new Trie();
	string word = "aabbc";
	obj->insert(word);
	bool param_2 = obj->search(word);
	bool param_3 = obj->startsWith("aacbb");
	cout << param_2 << param_3 << endl;
	return 0;
}
