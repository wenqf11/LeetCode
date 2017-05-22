#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	vector<string> st = s.letterCombinations("23");
	for (int i = 0; i < st.size(); i++) {
		std::cout << st[i] << std::endl;
	}

	system("pause");
	return 0;
}