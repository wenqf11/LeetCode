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
	vector<vector<int>> generateMatrix(int n) {
		int left = 0, right = n-1, top = 0, bottom = n-1;
		int totalNum = n*n;
		int i, j, k;
		int order = 0;
		vector<vector<int>> matrix(n, vector<int>(n));
		i = j = k = 0;
		
		while (k < totalNum) {
			++k;
			matrix[i][j] = k;
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
		return matrix;
	}
};