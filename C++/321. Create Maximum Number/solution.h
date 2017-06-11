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
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> res;
        for (int i = max(0, k - n); i <= min(m, k); ++i) {
            res = max(res, mergeVector(getMaxSubVec(nums1, i), getMaxSubVec(nums2, k - i)));
        }
        return res;
    }

    vector<int> getMaxSubVec(vector<int> &nums, int k) {
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++) {
            while (res.size() > 0 && res.size() + n - i > k && res.back() < nums[i]) {
                res.pop_back();
            }

            if (res.size() < k) res.push_back(nums[i]);
        }
        return res;
    }

    vector<int> mergeVector(vector<int> nums1, vector<int> nums2) {
        vector<int> res;
        int i = 0, j = 0, tmp = 0;
        while (nums1.size() + nums2.size()) {
            vector<int> &tmp = nums1 > nums2 ? nums1 : nums2;
            res.push_back(tmp[0]);
            tmp.erase(tmp.begin());
        }
        return res;
    }
};