#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        string t = "";
        int prev = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                for (int j = i - 1; j >= prev; --j) {
                    t += s[j];
                }
                prev = i + 1;
                t += ' ';
            }
        }
        if (prev < s.size()) {
            for (int j = s.size() - 1; j >= prev; --j) {
                t += s[j];
            }
        }
        return t;
    }
};