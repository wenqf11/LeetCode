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
    bool repeatedSubstringPattern(string str) {
        int n = str.size();
        for (int i = n / 2; i >= 1; --i) {
            if (n % i == 0) {
                int c = n / i;
                string t = "";
                for (int j = 0; j < c; ++j) {
                    t += str.substr(0, i);
                }
                if (t == str) return true;
            }
        }
        return false;
    }
};