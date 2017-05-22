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
private:
	vector<string> ans;
public:
	void getParenthesis(int left, int right, string str) {
		if (left < right && right > 0) getParenthesis(left, right - 1, str+")");
		if(left > 0) getParenthesis(left-1, right, str+"(");
		if (left == 0 && right == 0) {
			ans.push_back(str);
		}
	}

	vector<string> generateParenthesis(int n) {
		getParenthesis(n, n, "");
		return ans;
	}
};