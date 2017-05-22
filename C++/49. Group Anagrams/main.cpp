#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<string> vec = { "eat", "tea", "tan", "ate", "nat", "bat" };
	vector<vector<string>> res = s.groupAnagrams(vec);
	system("pause");
	return 0;
}