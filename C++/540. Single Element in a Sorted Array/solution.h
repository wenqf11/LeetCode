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
    int singleNonDuplicate(vector<int>& nums) {
        int ans;
        int l = 0, r = nums.size() - 1;
        int mid;
        while (l <= r) {
            mid = (l + r) >> 1;
            if (nums[mid] == nums[mid - 1]) {
                if ((mid - 1) & 1) {
                    r = mid - 2;
                } else {
                    l = mid + 1;
                }
            } else if (nums[mid] == nums[mid + 1]) {
                if ((mid + 1) & 1) {
                    l = mid + 2;
                } else {
                    r = mid - 1;
                }
            } else return nums[mid];
        }
        return nums[l];
    }
};