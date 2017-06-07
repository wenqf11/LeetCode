#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;


class NumArray {
private:
    vector<int> data;
    vector<int> bitSum;
public:
    NumArray(vector<int> nums) {
        data.resize(nums.size() + 1);
        bitSum.resize(nums.size() + 1);
        for (int i = 0; i < nums.size(); ++i) {
            update(i, nums[i]);
        }
    }

    void update(int i, int val) {
        int diff = val - data[i + 1];
        for (int j = i + 1; j < data.size(); j += (j & -j)) {
            bitSum[j] += diff;
        }
        data[i + 1] = val;
    }

    int sumRange(int i, int j) {
        return getSum(j + 1) - getSum(i);
    }

    int getSum(int i) {
        int res = 0;
        for (int j = i; j > 0; j -= (j & -j)) {
            res += bitSum[j];
        }
        return res;
    }
};