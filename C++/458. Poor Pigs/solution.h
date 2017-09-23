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
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {

        int r = minutesToTest / minutesToDie + 1;
        int n = 1;
        int i = 0;
        if (n >= buckets) return i;
        for (i = 1; ; ++i) {
            n *= r;
            if (n >= buckets) return i;
        }
        return 0;
    }
};