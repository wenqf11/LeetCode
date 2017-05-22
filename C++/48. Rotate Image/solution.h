#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<stack>  
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;

class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = i; j < matrix.size(); j++) {
				swap(matrix[i][j], matrix[j][i]);
			}
		}

		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < (matrix.size()+1)/2; j++) {
				swap(matrix[i][j], matrix[i][matrix.size()-1-j]);
			}
		}
	}
};