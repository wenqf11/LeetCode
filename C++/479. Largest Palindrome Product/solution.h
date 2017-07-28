#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
    int largestPalindrome(int n) {
        long a[] = {9, 9009, 906609, 99000099, 9966006699, 999000000999, 99956644665999, 9999000000009999};
        return a[n - 1] % 1337;
    }
};