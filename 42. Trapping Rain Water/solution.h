#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<stack>  
#include<unordered_map>
#include<sstream>
using namespace std;

class Solution {
public:
	int trap(vector<int>& height) {
		int max = 0, maxInd = -1;
		if (height.size() == 0) return 0;
		for (int i = 0; i < height.size(); ++i) {
			if (height[i] > max) {
				max = height[i];
				maxInd = i;
			}
		}
		int left = 0, right = height.size()-1, ans = 0;
		for (int i = 1; i <= maxInd; ++i) {
			if (height[i] >= height[left]) {
				for (int j = left + 1; j <= i - 1; ++j) {
					ans += height[left] - height[j];
				}
				left = i;
			}
		}

		for (int i = height.size()-2; i >= maxInd; --i) {
			if (height[i] >= height[right]) {
				for (int j = i+1; j <= right-1; ++j) {
					ans += height[right] - height[j];
				}
				right = i;
			}
		}
		return ans;
	}
};