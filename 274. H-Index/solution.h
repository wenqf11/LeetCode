#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;


class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> f(citations.size() + 1);
        int n = citations.size();
        for (int i = 0; i < n; i++) {
            f[citations[i] <= n ? citations[i] : n] += 1;
        }

        int sum = 0;
        for (int i = n; i > 0; i--) {
            sum += f[i];
            if (sum >= i) {
                return i;
            }
        }
        return 1;
    }
};