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
    bool canMeasureWater(int x, int y, int z) {
        return z == 0 || (x + y >= z && z % gcd(x, y) == 0);
    }
    int gcd(int x, int y) {
        return y == 0 ? x : gcd(y, x % y);
    }
};