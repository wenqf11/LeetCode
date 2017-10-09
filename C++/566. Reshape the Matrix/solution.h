#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <unordered_set>
#include <cmath>
using namespace std;

class Solution {
public:
    vector< vector<int> > matrixReshape(vector< vector<int> >& nums, int r, int c) {
        int m  = nums.size();
        if (m < 1) return nums;
        int n = nums[0].size();
        if (m * n != r * c) return nums;

        int a = 0;
        int b = 0;
        vector< vector<int> > ans(r, vector<int>(c, 0));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j) {
                ans[a][b] = nums[i][j];
                ++b;
                if (b == n) {
                    ++m;
                    b = 0;
                }
            }
        return ans;
    }
};