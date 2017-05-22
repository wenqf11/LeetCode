#pragma once
#include<vector>
#include<string>
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
	string getPermutation(int n, int k) {
		int total = factorial(n);
		string candidate = string("123456789").substr(0, n);
		string res(n, ' ');

		for (int i = 0; i < n; i++) {
			total /= (n - i);
			int index = (k-1) / total;
			res[i] = candidate[index];
			candidate.erase(index, 1);
			k -= index * total;
		}
		return res;
	}
	int factorial(int n)
	{
		int res = 1;
		for (int i = 2; i <= n; i++)
			res *= i;
		return res;
	}
};