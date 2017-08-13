#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <iostream>
#include <set>


using namespace std;

class Solution {
private:
    void quick_sort(vector<int>& nums, int left, int right, vector<int>& ind) {
        int l = left;
        int r = right;
        int mid = nums[(left + right) / 2];
        while (l <= r) {
            while (nums[l] > mid) ++l;
            while (nums[r] < mid) --r;
            if (l <= r) {
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;

                temp = ind[l];
                ind[l] = ind[r];
                ind[r] = temp;

                ++l;
                --r;
            }
        }
        if (l < right) quick_sort(nums, l, right, ind);
        if (left < r) quick_sort(nums, left, r, ind);
    }
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        string medal[] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        vector<int> ind(nums.size(), 0);
        vector<string> ans(nums.size());
        for (int i = 0; i < nums.size(); ++i) ind[i] = i;

        quick_sort(nums, 0, nums.size() - 1, ind);
        for (int i = 0; i < ind.size(); i++) {
            if (i > 2) ans[ind[i]] = to_string(i + 1);
            else {
                ans[ind[i]] = medal[i];
            }
        }
        return ans;
    }
};