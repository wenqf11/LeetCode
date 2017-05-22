#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include <stack>  
using std::string;
using std::vector;
using std::stack;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ) {
			if (it + 1 < nums.end() && *it == *(it + 1)) {
				it = nums.erase(it);
			}
			else {
				++it;
			}		 
		}
		return nums.size();
	}
};