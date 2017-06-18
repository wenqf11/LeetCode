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
    int findNthDigit(int n) {
        long pos = 1, num, digit;
        int res = 0;
        while (n > 0) {
            if (n - pos * (int(log10(pos)) + 1) * 9 > 0) {
                n -= pos * 9 * (int(log10(pos)) + 1);
                pos *= 10;
            } else {
                num = pos + (n - 1) / (int(log10(pos)) + 1);
                digit = (n - 1) % (int(log10(pos)) + 1) + 1;
                res =  getDigit(num, pos, digit);
                break;
            }
        }
        return res;
    }

    int getDigit(int num, int pos, int digit) {
        int ans = 0;
        while (digit > 0) {
            digit--;
            ans = num / pos;
            num %= pos;
            pos /= 10;
        }
        return ans;
    }
};