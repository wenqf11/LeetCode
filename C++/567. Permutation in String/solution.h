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
    bool checkInclusion(string s1, string s2) {
        vector<int> m1(128), m2(128);
        int n1 = s1.size(), n2 = s2.size();
        for (int i = 0; i < n1; ++i) {
            ++m1[s1[i]];
            ++m2[s2[i]];
        }
        if (m1 == m2) return true;
        for (int i = n1; i < n2; ++i) {
            ++m2[s2[i]];
            --m2[s2[i - n1]];
            if (m1 == m2) return true;
        }
        return false;
    }
};