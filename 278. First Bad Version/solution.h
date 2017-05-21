#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n, mid = 0;

        while (left <= right) {
            mid = (left + right) / 2;
            if (isBadVersion(mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return mid;
    }
};