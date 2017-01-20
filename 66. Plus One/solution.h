#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int n = digits.size();
		vector<int> reverseDigits(n+1, 0);
		for (int i = 0; i < n; ++i) {
			reverseDigits[i] = digits[n-1 - i];
		}

		int i = 0;
		reverseDigits[0]++;
		while (reverseDigits[i]>9) {
			reverseDigits[i + 1] ++;
			reverseDigits[i] %= 10;
			i++;
		}

		n = reverseDigits.size();
		if (reverseDigits[n - 1] == 0) n--;
		vector<int> res(n, 0);
		for (int i = 0; i < n; ++i) {
			res[i] = reverseDigits[n - 1 - i];
		}
		return res;
	}
};