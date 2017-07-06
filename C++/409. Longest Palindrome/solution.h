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
    int longestPalindrome(string s) {
        int n = s.size();
        int a[52] = {0};
        for (int i = 0; i < n; ++i) {
            if (s[i] >= 'a') {
                ++a[26 + (s[i] - 'a')];
            } else {
                ++a[s[i] - 'A'];
            }
        }
        int ans = 0, maxOdd = 0;
        bool mid = false;
        for (int i = 0; i < 52; ++i) {
            ans += a[i];
            if (a[i] % 2 == 1) {
                ans -= 1;
                mid = true;
            };
        }
        return mid ? ans + 1 : ans;
    }
};