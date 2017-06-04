#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;


class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if (n <= 0) return -1;
        vector<int> uglyNums;
        vector<int> idx(primes.size(), 0);
        vector<int> tmp(primes.size(), 0);
        uglyNums.push_back(1);
        int m = primes.size(), minIdx = 0;
        int mul = 0, minMul;
        while (uglyNums.size() < n) {
            minMul = INT_MAX;
            minIdx = 0;

            for (int i = 0; i < primes.size(); ++i) {
                tmp[i] = uglyNums[idx[i]] * primes[i];
                minMul = min(minMul, tmp[i]);
            }

            for (int i = 0; i < primes.size(); ++i) {
                if (minMul == tmp[i]) ++idx[i];
            }
            uglyNums.push_back(minMul);
        }
        return uglyNums.back();
    }
};