#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	vector<string> vec = s.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCAAAAAGGGTTT");
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	return 0;
}
