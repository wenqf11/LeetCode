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
    vector<int> findAnagrams(string s, string p) {
        vector<int> res, m(256, 0);
        if (s.empty()) return res;
        int left = 0, right = 0, cnt = p.size(), n = s.size();
        for (char c : p) ++m[c];

        while (right < n) {
            if (m[s[right]] >= 1) cnt--;
            m[s[right]]--;
            right ++;

            if (cnt == 0) res.push_back(left);

            if (right - left == p.size()) {
                if (m[s[left]] >= 0) {
                    cnt++;
                }
                m[s[left]]++;
                left++;
            }

        }
        return res;
    }
};