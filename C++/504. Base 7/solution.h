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
    string convertToBase7(int num) {
        string ans = "";
        int base = 7;
        bool isNeg = false;
        if (num < 0) {
            num  = -num;
            isNeg = true;
        }
        while (num >= base) {
            ans = to_string(num % base) + ans;
            num = num / base;
        }
        ans = to_string(num % base) + ans;
        if (isNeg) {
            ans = "-" + ans;
        }
        return ans;
    }
};