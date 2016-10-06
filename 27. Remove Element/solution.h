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
	int removeElement(vector<int>& nums, int val) {
		for (vector<int>::iterator it = nums.begin(); it != nums.end();) {
			if (*it == val) {
				it = nums.erase(it);
			}
			else {
				++it;
			}
		}
		return nums.size();
	}
};