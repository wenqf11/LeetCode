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
    int countSegments(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i] != ' ') ++ans;
            while (i < n && s[i] != ' ') ++i;
        }
        return ans;
    }
};