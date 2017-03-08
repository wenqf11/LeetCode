#pragma once
#include <vector>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> f(triangle.size(), 0);
        for (int i = 0; i < triangle.size(); i++) {
            if (triangle[i].size() >= 2) {
                f[triangle[i].size()-1] = f[triangle[i].size()-2]+triangle[i][triangle[i].size()-1];
            }
            for (int j = triangle[i].size()-2; j >=1; j--) {
                f[j] = min(f[j-1], f[j]) + triangle[i][j];
            }
            f[0] += triangle[i][0];
        }
        int minSum = f[0];
        for(int i = 0; i< triangle.size(); i++) {
            if (f[i] < minSum) {
                minSum = f[i];
            }
        }
        return minSum;
    }
};