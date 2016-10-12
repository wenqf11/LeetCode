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
	string countAndSay(int n) {
		stringstream ss;
		string s = "1";
		string res = "";
		for (int i = 0; i < n-1; i++) {
			for (int i = 0; i < s.length(); i++) {
				int count = 1;
				while (i + 1 < s.length() && s[i] == s[i + 1]) {
					++count;
					++i;
				}
				ss.str("");
				ss << count;
				res += ss.str() + s[i];
			}
			s = res;
			res = "";
		}
		return s;
	}
};