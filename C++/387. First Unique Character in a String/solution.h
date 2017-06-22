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
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            ++m[s[i]];
        }

        for (int i = 0; i < n; ++i) {
            if (m[s[i]] == 1) return i;
        }
        return -1;
    }
};