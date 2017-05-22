#pragma once
#include<vector>
#include<string>
#include<cstring>
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
	int N, K;
	vector<vector<int>> ans;
	void getCombine(vector<int> vec, int former, int m) {
		if (m == 0) {
			vector<int> v = vec;
			ans.push_back(v);
			return;
		}
		for (int i = former + 1; i <= N; i++) {
			vec[K-m] = i;
			getCombine(vec, i, m - 1);
		}
	}

	vector<vector<int>> combine(int n, int k) {
		N = n;
		K = k;
		for (int i = 1; i <= n; i++) {
			vector<int> vec(k);
			vec[0] = i;
			getCombine(vec, i, k - 1);
		}
		return ans;
	}
};