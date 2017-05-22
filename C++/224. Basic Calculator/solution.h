#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
	int calculate(string s) {
		int res = 0, sign = 1, n = s.size();
		stack<int> st;
		for (int i = 0; i < n; ++i) {
			char c = s[i];
			if (c >= '0') {
				int num = 0;
				while (i < n && s[i] >= '0') {
					num = 10 * num + s[i] - '0';
					i++;
				}
				res += sign * num;
				--i;
			} else if (c == '+') {
				sign = 1;
			} else if (c == '-') {
				sign = -1;
			} else if (c == '(') {
				st.push(res);
				st.push(sign);
				res = 0;
				sign = 1;
			} else if (c == ')') {
				res *= st.top();
				st.pop();
				res += st.top();
				st.pop();
			}
		}
		return res;
	}
};