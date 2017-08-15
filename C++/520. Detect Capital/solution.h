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
    bool detectCapitalUse(string word) {
        bool isUpCase = false, isLowCase = false;
        for (int i = 1; i < word.size(); ++i) {
            if (word[i] >= 'a') {
                isLowCase = true;
            } else if (word[i] < 'a') {
                isUpCase = true;
            }
        }
        if (isLowCase && isUpCase) return false;
        if (isUpCase && word[0] >= 'a') return false;
        return true;
    }
};