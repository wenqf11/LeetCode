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
    int findComplement(int num) {
        long n = 1;
        while (n <= num) {
            n *= 2;
        }
        return n - 1 - num;
    }
};