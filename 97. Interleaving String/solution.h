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
	bool isInterleave(string s1, string s2, string s3) {
		if (s3.size() != s1.size() + s2.size())
			return false;

		//create indicator
		vector<vector<bool>> match(s1.size() + 1, vector<bool>(s2.size() + 1, false));

		//initialization the first row and the first column
		match[0][0] = true;
		for (int l1 = 1; l1 <= s1.size(); ++l1) {
			match[l1][0] = match[l1 - 1][0] && s1[l1 - 1] == s3[l1 - 1];
		}
		for (int l2 = 1; l2 <= s2.size(); ++l2) {
			match[0][l2] = match[0][l2-1] && s2[l2 - 1] == s3[l2 - 1];
		}

		//work through the rest of matrix using the formula
		for (int l1 = 1; l1 <= s1.size(); ++l1) {
			for (int l2 = 1; l2 <= s2.size(); ++l2) {
				int l3 = l1 + l2;
				if (s1[l1 - 1] == s3[l3 - 1]) {
					match[l1][l2] = match[l1 - 1][l2] || match[l1][l2];
				}
				if (s2[l2 - 1] == s3[l3 - 1]) {
					match[l1][l2] = match[l1][l2 - 1] || match[l1][l2];
				}
			}
		}

		//the last element is the result
		return match[s1.size()][s2.size()];
	}
};