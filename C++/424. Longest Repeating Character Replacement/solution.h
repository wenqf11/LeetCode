#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <set>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0, maxCnt = 0, res = 0;
        int n = s.size();
        vector<int> count(26, 0);
        for (int i = 0; i < n; ++i) {
            maxCnt = max(maxCnt, ++count[s[i] - 'A']);
            while ( i - start + 1 - maxCnt > k) {
                --count[s[start] - 'A'];
                ++start;
            }
            res = max(res, i - start + 1);
        }
        return res;
    }
};