#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
using namespace std;


class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int sum = 0, n = machines.size();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            sum += machines[i];
        }
        int average = sum / n;
        if (sum != average * n) {
            return -1;
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            cnt += machines[i] - average;
            ans = max(ans, max(abs(cnt), machines[i] - average));
        }
        return ans;
    }
};