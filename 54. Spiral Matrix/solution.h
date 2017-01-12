#pragma once
#include<vector>
#include<string>
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
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		if (matrix.size() == 0 || matrix[0].size() == 0) return {};
		int left = 0, right = matrix[0].size()-1, top = 0, bottom = matrix.size()-1;
		int totalNum = matrix[0].size()*matrix.size();
		int i, j, k;
		int order = 0;
		vector<int> res(totalNum);
		i = j = k = 0;
		
		while (k < totalNum) {
			++k;
			res[k - 1] = matrix[i][j];
			switch (order) {
				case 0:
					j++;
					break;
				case 1:
					i++;
					break;
				case 2:
					j--;
					break;
				case 3:
					i--;
					break;
			}
			if (j > right) {
				j = right;
				i++;
				order = 1;
				top++;
			} else if (i > bottom) {
				i = bottom;
				j--;
				order = 2;
				right--;
			} else if (j < left){
				j = left;
				i--;
				order = 3;
				bottom--;
			} else if (i < top){
				i = top;
				j++;
				order = 0;
				left++;
			}
		}
		return res;
	}
};