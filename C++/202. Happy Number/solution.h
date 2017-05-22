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
#include <unordered_map>
using namespace std;


class Solution {
private:
	unordered_map<int, bool> map;
public:
	bool isHappy(int n) {
		int ans = 0;
		if (map[n]) return false;
		map[n] = true;
		while (n > 0) {
			ans += (n % 10) * (n % 10);
			n = n / 10;
		}
		if (ans == 1) return true;
		else return isHappy(ans);
	}
};