#pragma once
#include<vector>
#include<string>
#include<climits>
using std::string;
using std::vector;


class Solution {
public:
	int myAtoi(string str) {
		long long ans = 0;
		int start = 0, end = str.length()-1;
		while (start<=end&&str[start] == ' ') ++start;
		while (start<=end&&(str[end] > '9' || str[end] < '0')) --end;
		if (str[start] == '-') {
			++start;
			for (int i = start; i <= end; i++) {
				if (str[i] >= '0'&&str[i] <= '9') {
					ans = ans * 10 + str[i] - '0';
				}else {
					break;
				}
				if (ans*-1 < INT_MIN) {
					return INT_MIN;
				}
			}
			ans *= -1;
		}else{
			if (str[start] == '+') ++start;
			for (int i = start; i <= end; i++) {
				if (str[i] >= '0'&&str[i] <= '9') {
					ans = ans * 10 + str[i] - '0';
				}
				else {
					break;
				}
				if (ans > INT_MAX) {
					return INT_MAX;
				}
			}
		}
		if (ans < INT_MIN) {
			return INT_MIN;
		}
		else if (ans > INT_MAX) {
			return INT_MAX;
		}
	
		return ans;
	}
};