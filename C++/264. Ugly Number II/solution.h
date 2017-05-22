#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    int nthUglyNumber(int n) {
        if (n <= 0) return -1;
        vector<long> uglyNums;
        uglyNums.push_back(1);
        int ind2 = 0, ind3 = 0, ind5 = 0;
        long m2 = 0, m3 = 0, m5 = 0, m = 0;
        for (int i = 0; i < n - 1; i++) {
            m2 = uglyNums[ind2] * 2;
            m3 = uglyNums[ind3] * 3;
            m5 = uglyNums[ind5] * 5;
            m = min(m2, min(m3, m5));
            if (m == m2) ind2++;
            if (m == m3) ind3++;
            if (m == m5) ind5++;
            uglyNums.push_back(m);
        }
        return uglyNums[uglyNums.size() - 1];
    }
};