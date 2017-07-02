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
    char tochar(int k) {
        if (k < 10) {
            return '0' + k;
        } else return 'a' + k - 10;
    }

    string toHex(int num) {
        long n = num;
        if (n < 0) n = 4294967296 + n;
        if (n == 0) return "0";
        int d = 16;
        string ans = "";
        while (n > 0) {
            ans =  tochar(n % d) + ans;
            n = n / d;
        }
        return ans;
    }
};