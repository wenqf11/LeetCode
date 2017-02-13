#pragma once
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


class Solution {
public:
	vector<int> grayCode(int n) {
		
		if (n == 0) {
			vector<int> result;
			result.push_back(0);
			return result;
		}
		
		vector<int> result = grayCode(n - 1);

		int addNumber = 1 << (n - 1);
		int originalsize = result.size();

		for (int i = originalsize - 1; i >= 0; i--) {
			result.push_back(addNumber + result[i]);
		}
		return result;
	}
};