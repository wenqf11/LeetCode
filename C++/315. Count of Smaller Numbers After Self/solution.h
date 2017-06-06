#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;


class Solution {
public:
    int binarySearch(const vector<int>& a, const int& target) {
        int left = 0, right = a.size() - 1, mid = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (target <= a[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> ordered_arr, res(n, 0);
        for (int i = n - 1; i >= 0; --i) {
            int idx = binarySearch(ordered_arr, nums[i]);
            ordered_arr.insert(ordered_arr.begin() + idx, nums[i]);
            res[i] = idx;
        }
        return res;
    }
};