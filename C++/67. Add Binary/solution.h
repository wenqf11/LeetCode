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
	string addBinary(string a, string b) {
		int lena = a.length(), lenb = b.length();
		int maxLen = max(lena, lenb);
		string ans = "";
		int incre = 0, sum = 0;
		for (int i = 0; i < maxLen; i++) {
			string bit = "0";
			sum = 0;
			if (lena-1-i >= 0) sum += a[lena-1-i] - '0';
			if (lenb-1-i >= 0) sum += b[lenb-1-i] - '0';
			sum += incre;
			if (sum % 2 == 1) {
				bit = "1";
			}
			incre = sum / 2;
			ans = bit + ans;
		}
		if(incre == 1) {
			ans = "1" + ans;
		}
		return ans;
	}
};