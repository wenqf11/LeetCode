#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) return false;
        int a[] = {2, 3, 5};
        vector<int> divisor(a, a + 3);
        for (auto i : a) {
            while (num % i == 0) {
                num /= i;
            }
        }
        return num == 1;
    }
};