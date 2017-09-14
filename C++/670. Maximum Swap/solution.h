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
    int maximumSwap(int num) {
        string st = to_string(num);
        int n = st.size();
        for (int i = 0; i < n; ++i) {
            char maxBit = st[i];
            int ind = -1;
            for (int j = n - 1; j > i; --j) {
                if (st[j] > maxBit) {
                    maxBit = st[j];
                    ind = j;
                }
            }
            if (ind != -1) {
                char tmp = st[i];
                st[i] = st[ind];
                st[ind] = tmp;
                break;
            }
        }
        return stoi(st);
    }
};