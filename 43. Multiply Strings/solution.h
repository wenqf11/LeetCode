#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<stack>  
#include<unordered_map>
#include<sstream>
using namespace std;

class Solution {
public:
	string multiply(string num1, string num2) {
		vector<int> res(num1.size() + num2.size(), 0);
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		for (int i = 0; i < num1.size(); i++) {
			for (int j = 0; j < num2.size(); j++) {
				res[i + j] += (num1[i]-'0') * (num2[j]-'0');
				if (res[i+j] > 9) {
					res[i + j + 1] += res[i + j] / 10;
					res[i + j] = res[i + j] % 10;
				}
			}
		}
		for (int i = 0; i < res.size(); ++i) {
			if (res[i] > 9) {
				res[i + 1] += res[i] / 10;
				res[i] = res[i] % 10;
			}
		}
		string ans = "";
		int n = res.size() - 1;
		while (res[n] == 0) --n;
		for (int i = n; i >= 0; --i) {
			ans += res[i] + '0';
		}
		if (ans == "") ans = "0";
		return ans;
	}
};