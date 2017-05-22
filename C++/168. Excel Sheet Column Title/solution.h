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
public:
	string convertToTitle(int n) {
		string res;
		while (n > 0) {
			int r = n % 26;
			n  = n / 26;
			if (r == 0 ) {
				res = 'Z' + res;
				n--;
			} else {
				char chr = ('A' + r - 1) ;
				res = chr + res;
			}
		}
		return res;
	}
};