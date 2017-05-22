#pragma once
#include<vector>
#include<string>
#include<climits>
using std::string;
using std::vector;


class Solution {
public:
	int maxArea(vector<int>& height) {
		int maxWater = -1, minAB = height[0];
		int i = 0, j = height.size() - 1;
		if (j <= 0)return 0;
		while (i < j) {
			minAB = height[i];
			if (minAB > height[j]) minAB = height[j];
			int area = minAB*(j - i);
			if (height[i] < height[j]) {
				i++;
			}else {
				j--;
			}
			if (area > maxWater) maxWater = area;
		}

		return maxWater;
	}
};