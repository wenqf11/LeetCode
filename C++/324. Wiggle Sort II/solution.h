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
    int findKthBySort(vector<int>& nums, int left, int right, int k) {
        int l = left;
        int r = right;
        int mid = nums[(l + r) / 2];
        while (l <= r) {
            while (nums[l] < mid) l++;
            while (nums[r] > mid) r--;
            if (l <= r) {
                swap(nums[l], nums[r]);
                l++;
                r--;
            }
        }

        if (left + k - 1 <= r) return findKthBySort(nums, left, r, k);
        if (left + k - 1 < l) return nums[left + k - 1];
        return findKthBySort(nums, l, right, k - (l - left));
    }
    void wiggleSort(vector<int>& nums) {
        int n = nums.size(), m = (n + 1) / 2, j = n;
        int medium = findKthBySort(nums, 0, n - 1, m);

        vector<int> temp(n, 0);

        int s = 0, t = n - 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] < medium)
                temp[s++] = nums[i];
            else if (nums[i] > medium)
                temp[t--] = nums[i];
        }

        while (s < m) temp[s++] = medium;
        while (t >= m) temp[t--] = medium;

        for (auto r : temp) {
            cout << r <<  " ";
        }
        cout << endl;
        for (int i = 0; i < n; ++i) {
            nums[i] = i & 1 ? temp[--j] : temp[--m];
        }
    }
};