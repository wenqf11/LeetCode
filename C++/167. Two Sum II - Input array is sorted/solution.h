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
	vector<int> twoSum(vector<int>& numbers, int target) {
		int left = 0, right = numbers.size() - 1;
		vector<int> res;
		while (left < right) {
			int sum = numbers[left] + numbers[right];
			if (sum == target) {
				res.push_back(left + 1);
				res.push_back(right + 1);
				return res;
			} else if (sum < target) left++;
			else right--;
		}
		return res;
	}
};