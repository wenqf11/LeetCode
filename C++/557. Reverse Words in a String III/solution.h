#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    bool checkRecord(string s) {
        int A = 0, L = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'A') {
                ++A;
            } else if (i + 1 < s.size() && i + 2 < s.size() && s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L') {
                return false;
            }
        }
        return A < 2;
    }
};