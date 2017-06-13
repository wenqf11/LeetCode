#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;


class Solution {
public:
    bool isPowerOfFour(int num) {
        return (num > 0 && int(log10(num) / log10(4)) - log10(num) / log10(4) == 0);
    }
};