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
    int integerReplacement(int n) {
        if (n == 1) return 0;
        if (n % 2 == 0) {
            return 1 + integerReplacement(n / 2);
        } else {
            long long t = n;
            return 2 + min(integerReplacement((t + 1) / 2), integerReplacement((t - 1) / 2));
        }
    }
};