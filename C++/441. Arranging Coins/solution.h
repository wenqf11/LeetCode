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
    int arrangeCoins(int n) {
        return (int)((-1 + sqrt(1 + 8 * (long)n)) / 2);
    }
};