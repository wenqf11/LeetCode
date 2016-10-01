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
	bool isPair(char a, char b) {
		if (a == '{' && b == '}') {
			return true;
		}else if (a == '[' && b == ']') {
			return true;
		}
		else if (a == '(' && b == ')') {
			return true;
		}
		return false;
	}
	bool isValid(string s) {
		stack<char> q;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
				q.push(s[i]);
			}
			else {
				if (q.size()>0 && isPair(q.top(), s[i])) {
					q.pop();
				}
				else {
					return false;
				}
			}
		}
		if (q.size() == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};