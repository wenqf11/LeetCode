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
	int largestRectangleArea(vector<int>& heights){
		if (heights.size() == 0) return 0;
		int min = heights[0], ans = 0;
		vector<int> stack;
		heights.push_back(0);
		int sum = 0, i = 0;
		while (i < heights.size()) {
			if (stack.empty() || heights[i] > heights[stack.back()]) {
				stack.push_back(i);
				i++;
			} else {
				int t = stack.back();
				stack.pop_back();
				int num = 0;
				if (stack.empty()) {
					num = i;
				} else {
					num = i - stack.back() - 1;
				}
				sum = max(sum, heights[t] * num);
			}
		}
		return sum;
	}
};