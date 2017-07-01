#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map< int, unordered_set<int> > m;
        vector<int> f(n, 0);
        m[0].insert(0);

        int k = 0;
        for (int i = 1; i < n; ++i) {
            while (f[k] + 1 < stones[i] - stones[k]) ++k;
            for (int j = k; j < i; ++j) {
                int t = stones[i] - stones[j];
                if (m[j].count(t - 1) || m[j].count(t) || m[j].count(t + 1)) {
                    m[i].insert(t);
                    f[i] = max(f[i], t);
                }
            }
        }
        return f.back() > 0;
    }
};