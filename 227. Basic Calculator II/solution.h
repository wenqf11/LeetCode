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
		int res = 0, num = 0, n = s.size();
		char sign = '+';
		stack<int> nums;

		for (int i = 0; i < n; ++i) {
			if (s[i] >= '0') {
				while (i < n && s[i] >= '0') {
					num = 10 * num + s[i] - '0';
					i++;
				}
				--i;
			}
			if ((s[i] < '0' && s[i] != ' ') || i == n - 1) {
				if (sign == '+') nums.push(num);
				if (sign == '-') nums.push(-num);
				if (sign == '*' || sign == '/') {
					int tmp = sign == '*' ? nums.top() * num : nums.top() / num ;
					nums.pop();
					nums.push(tmp);
				}
				sign = s[i];
				num = 0;
			}
		}
		while (!nums.empty()) {
			res += nums.top();
			nums.pop();
		}
		return res;
	}
};