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
	int longestValidParentheses(string s) {
		stack<int> st;
		st.push(-1);
		int max = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') {
				st.push(i);
			}
			else if (s[i] == ')') {
				int k = st.top();
				if (k >= 0 && s[k] == '(') {
					st.pop();
					if (i - st.top() > max) {
						max = i - st.top();
					}
				} else {
					st.push(i);
				}
			}
		}

		return max;
	}
};