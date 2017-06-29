#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int n = A.size();

        long t = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += A[i];
            t += i * A[i];
        }
        long ans = t;

        for (int i = 1; i < n; ++i) {
            t = t + sum - n * A[n - i];
            ans = max(ans, t);
        }
        return ans;
    }
};