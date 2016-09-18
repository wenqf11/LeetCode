#pragma once
#include<vector>
#include<string>
using std::string;
using std::vector;


class Solution {
public:
	/*string longestPalindrome(string s) {
		for (int j = s.length(); j >= 1; j--)
			for (int i = 0; i < s.length(); i++) {
				if (i + j > s.length()) break;
				if (isPalindrome(s.substr(i, j))) {
					return s.substr(i, j);
				}
			}
		return "";
	}
	bool isPalindrome(string str) {
		for (int i = 0; i <= (str.length()-1)/2; i++) {
			if (str[i] != str[str.length() - 1 - i]) {
				return false;
			}
		}
		return true;
	}*/
	string longestPalindrome(string s) {
		const int len = s.length();

		if (len <= 1) return s;
		int maxLen = 0, start = 0;
		
		for (int i = 1; i < len; i++) {
			int low = i - 1, high = i;
			while (low >= 0 && high < len && s[low] == s[high]) {
				--low;
				++high;
			}
			if (high - low - 1 > maxLen) {
				maxLen = high - low - 1;
				start = low + 1;
			}

			low = i - 1, high = i+1;
			while (low >= 0 && high < len && s[low] == s[high]) {
				--low;
				++high;
			}
			if (high - low - 1 > maxLen) {
				maxLen = high - low - 1;
				start = low + 1;
			}
		}
		return s.substr(start, maxLen);
	}
};