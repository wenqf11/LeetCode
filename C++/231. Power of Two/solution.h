#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

// Definition for a binary tree node.
class Solution {
public:
	bool isPowerOfTwo(int n) {
		if (n == 0) return false;
		if (n % 2 == 0) {
			return isPowerOfTwo(n / 2);
		}
		return n == 1;
	}
};