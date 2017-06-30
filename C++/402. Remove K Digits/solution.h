#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        int len = num.size();
        if (k >= len) return "0";

        int start = 0;
        bool deleted = true;
        while (k > 0 && deleted) {
            deleted = false;
            for (int i = start; i < len - 1; ++i) {
                if (num[i] > num[i + 1]) {
                    num.erase(num.begin() + i);
                    k--;
                    start = max(0, i - 1);
                    deleted = true;
                    break;
                }
            }
        }

        while (k > 0) {
            num.erase(num.end() - 1);
            --k;
        }

        while (num.size() > 1 && num[0] == '0') {
            num.erase(num.begin());
        }

        return num;
    }
};