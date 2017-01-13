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
	int *f;
	int N;
	int sum = 0;

	bool checkOk(int x, int y) {
		for(int i = 0; i < x; i++){
			if (f[i]==y || abs(i - x) == abs(f[i] - y)) return false;
		}
		return true;
	}
	void tryQueenPosition(int x, int y) {
		f[x] = y;
		if (x == N-1) {
			sum++;
			return;
		}
		for (int i = 0; i < N; i++) 
			if (checkOk(x+1, i)) {
				tryQueenPosition(x+1, i);
			}
		f[x] = -1;
	}

	int totalNQueens(int n) {
		f = new int[n];
		for (int i = 0; i < n; i++) {
			f[i] = -1;
		}
		N = n;
		for (int i = 0; i < n; ++i){
			tryQueenPosition(0, i);
		}

		delete [] f;
		return sum;
	}
};