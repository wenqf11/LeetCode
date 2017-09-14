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
    int countSubstrings(string s) {
        int n = s.size();
        int left = 0, right = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            left = i;
            right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                ++ans;
                --left;
                ++right;
            }

            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                ++ans;
                --left;
                ++right;
            }
        }
        return ans;
    }
};