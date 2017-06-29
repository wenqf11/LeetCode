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
    int lastRemaining(int n) {
        int size = n;
        int step = 1;
        int head = 1;
        bool left = true;

        while (size > 1) {
            if (left || size % 2 == 1) {
                head = head + step;
            }

            size /= 2;
            left = !left;
            step *= 2;
        }
        return head;
    }
};