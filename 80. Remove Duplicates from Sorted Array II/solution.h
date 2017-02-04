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
	int removeDuplicates(vector<int>& nums) {
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ) {
			if (it + 1 < nums.end() && it+2<nums.end() && *it == *(it + 1) && *it == *(it+2)) {
				it = nums.erase(it);
			}
			else {
				++it;
			}
		}
		return nums.size();
	}
};