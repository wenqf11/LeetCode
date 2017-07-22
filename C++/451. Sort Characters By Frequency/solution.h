#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stack>
using namespace std;



class Solution {
public:
    unordered_map<char, int> m;
    string frequencySort(string s) {
        for (int i = 0; i < s.size(); ++i) {
            ++m[s[i]];
        }
        sort(s.begin(), s.end(), [&](char& a, char& b) {
            return m[a] > m[b] || (m[a] == m[b] && a < b);
        });
        return s;
    }
};