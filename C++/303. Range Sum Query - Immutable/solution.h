#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <unordered_map>
using namespace std;


class NumArray {
private:
    vector<int> sum;
public:
    NumArray(vector<int> nums) {
        if (nums.size() == 0) return;
        sum.push_back(nums[0]);
        for (int i = 1; i < nums.size(); ++i) {
            sum.push_back(sum.back() + nums[i]);
        }
    }

    int sumRange(int i, int j) {
        return i > 0 ? sum[j] - sum[i - 1] : sum[j];
    }
};
