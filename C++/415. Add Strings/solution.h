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
    string addStrings(string num1, string num2) {
        int m = num1.size(), n = num2.size();
        int len = max(m, n);
        vector<int> a(len, 0);
        vector<int> b(len, 0);
        vector<int> c(len + 1, 0);
        for (int i = 0; i < m; ++i) {
            a[i] = num1[m - 1 - i] - '0';
        }
        for (int i = 0; i < n; ++i) {
            b[i] = num2[n - 1 - i] - '0';
        }

        for (int i = 0; i < len; ++i) {
            c[i] += (a[i] + b[i]);
            c[i + 1] = c[i] / 10;
            c[i] = c[i] % 10;
        }
        if (c[len] != 0) ++len;

        string res = "";
        for (int i = len - 1; i >= 0; --i) {
            res += c[i] + '0';
        }
        return res;
    }
};