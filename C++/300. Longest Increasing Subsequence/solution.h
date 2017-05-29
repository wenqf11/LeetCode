#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <unordered_map>
using namespace std;


class Solution {
private:
    vector<int> res;

public:
    int binarySearch(int target) {
        int left = 0, right = res.size() - 1;
        while (left <= right) {
            int mid = (right + left) / 2;
            if (res[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return left;
    }

    int lengthOfLIS(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            if (res.empty() || res.back() < nums[i]) {
                res.push_back(nums[i]);
            } else {
                int index = binarySearch(nums[i]);
                res[index] = nums[i];
            }
        }
        for (auto r : res) cout << r << endl;
        return res.size();
    }
};