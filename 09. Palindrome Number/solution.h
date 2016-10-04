#pragma once
#include<vector>
#include<string>
#include<climits>
using std::string;
using std::vector;


class Solution {
public:
	bool isPalindrome(int x) {
		bool q = true;
		int leftDiv = 1, rightDiv = 10;
		if (x < 0) return false;
		while (x / leftDiv >= 10) {
			leftDiv *= 10;
		}

		while (rightDiv < leftDiv * 10) {
			if (x%rightDiv / (rightDiv / 10) != x / leftDiv % 10) {
				q = false;
			}
			rightDiv *= 10;
			leftDiv /= 10;
		}

		return q;
	}
};