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
public:
	int compareVersion(string version1, string version2) {
		int size1 = version1.size();
		int size2 = version2.size();
		for (int i = 0, j = 0; i < size1 || j < size2; i++, j++) {
			int sum1 = 0, sum2 = 0;
			while (i < size1 && version1[i] != '.') {
				sum1 = sum1 * 10 + version1[i] - '0';
				i++;
			}

			while (j < size2 && version2[j] != '.') {
				sum2 = sum2 * 10 + version2[j] - '0';
				j++;
			}

			if (sum1 > sum2) {
				return 1;
			} else if (sum1 < sum2) {
				return -1;
			}
		}

		return 0;
	}
};