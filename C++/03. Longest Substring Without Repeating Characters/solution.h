#pragma once
#include<string>
using std::string;


class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int max = 0;
		int *prev = new int[s.length()];
		if (s.length() > 0) max = 1;
		for (int i = 0; i < s.length(); i++) {
			prev[i] = -1;
			for (int j = i - 1; j >= 0; j--) {
				if (s[i] == s[j]) {
					prev[i] = j;
					break;
				}
			}
		}

		int prevDuplicate = -1;
		for (int i = 0; i < s.length(); i++) {
			if (prev[i] > prevDuplicate) {
				prevDuplicate = prev[i];
			}
			if (i - prevDuplicate > max) {
				max = i - prevDuplicate;
			}
		}

		delete[] prev;
		return max;
	}
};