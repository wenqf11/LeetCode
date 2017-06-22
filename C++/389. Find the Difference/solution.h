#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mapS;
        int n = s.size(), m = t.size();
        for (int i = 0; i < n; ++i) {
            ++mapS[s[i]];
        }

        for (int i = 0; i < m; ++i) {
            --mapS[t[i]];
            if (mapS[t[i]] < 0) return t[i];
        }
        return ' ';
    }
};