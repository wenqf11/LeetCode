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
	vector<int> originNums;
	void getCombine(vector<int> vec, int former, int m) {
		if (m == 0) {
			vector<int> v = vec;
			for (int i = 0; i < v.size(); i++) {
				v[i] = originNums[v[i]-1];
			}
			ans.push_back(v);
			return;
		}
		for (int i = former + 1; i <= N; i++) {
			vec[K-m] = i;
			getCombine(vec, i, m - 1);
		}
	}

	void combine(int n, int k) {
		N = n;
		K = k;
		for (int i = 1; i <= n; i++) {
			vector<int> vec(k);
			vec[0] = i;
			getCombine(vec, i, k - 1);
		}
	}

	vector<vector<int>> subsets(vector<int>& nums) {
		originNums = nums;
		for (int i = 0; i < nums.size(); i++) {
			combine(nums.size(), i+1);
		}
		ans.push_back({});
		return ans;
	}
};