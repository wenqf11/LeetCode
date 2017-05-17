#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;


// Definition for a binary tree node.
class Solution {
public:
	int addDigits(int num) {
		int sum = num, tmp = 0;
		while (sum > 9) {
			tmp = 0;
			while (sum > 0) {
				tmp += sum % 10;
				sum = sum / 10;
			}
			sum = tmp;
		}
		return sum;
	}
};