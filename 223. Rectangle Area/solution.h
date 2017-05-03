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
using namespace std;


class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		int sum = (C - A) * (D - B) + (H - F) * (G - E);
		if (E >= C || F >= D || B >= H || A >= G) return sum;
		return sum - ((min(G, C) - max(A, E)) * (min(D, H) - max(B, F)));
	}
};