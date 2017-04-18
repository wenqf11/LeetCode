#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;



class Solution {
private:
	static bool cmp(int a, int b) {
		stringstream ss;
		ss << a;
		string strA = ss.str();
		ss << b;
		string strB = ss.str();
		string s1 = strA + strB;
		string s2 = strB + strA;
		return s1 > s2;
	}
public:

	string largestNumber(vector<int>& nums) {
		string str;
		sort(nums.begin(), nums.end(), cmp);

		stringstream ss;
		for (int i = 0; i < nums.size(); i++) {
			ss.str("");
			ss << nums[i];
			str += ss.str();
		}
		if (str[0] == '0') return "0";
		return str;
	}
};