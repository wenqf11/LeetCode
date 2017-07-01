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
    int longestSubstring(string s, int k) {
        int i = 0;
        int n = s.size();
        int ans = 0;
        while (i + k <= n) {
            int m[26] = {0}, mask = 0, max_idx = i;
            for (int j = i; j < n; ++j) {
                int t = s[j] - 'a';
                m[t]++;
                if (m[t] < k) mask |= (1 << t);
                else mask &= (~(1 << t));
                if (mask == 0) {
                    ans = max(ans, j - i + 1);
                    max_idx = j;
                }
            }
            i = max_idx + 1;
        }

        return ans;
    }
};