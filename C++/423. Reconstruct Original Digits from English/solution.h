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
    string originalDigits(string s) {
        const int LEN = 26;
        vector<short> count(LEN, 0);
        string res = "";
        int nums[] = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};
        char chars[] = {'z', 'w', 'u', 'x', 'g', 'o', 'h', 'f', 's', 'i'};
        string words[10] = {"zero", "two", "four", "six", "eight", "one", "three", "five", "seven", "nine"};
        for (int i = 0; i < s.size(); ++i) {
            ++count[s[i] - 'a'];
        }
        for (int i = 0; i < 10; ++i) {
            int num = count[chars[i] - 'a'];
            if (num == 0) continue;
            for (int j = 0; j < words[i].size(); ++j) {
                count[words[i][j] - 'a'] -= num;
            }

            for (int j = 0; j < num; ++j) {
                res += to_string(nums[i]);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};