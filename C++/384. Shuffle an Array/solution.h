#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

class Solution {
private:
    vector<int> originNums, currentNums;
public:
    Solution(vector<int> nums) {
        originNums = nums;
        currentNums = originNums;
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        currentNums = originNums;
        return currentNums;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int n = currentNums.size();
        for (int i = 0; i < n; ++i) {
            int _id = rand() % (n - i);
            swap(currentNums[i], currentNums[i + _id]);
        }
        return currentNums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */