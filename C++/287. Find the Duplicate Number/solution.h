#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 0, start = 0;
        while (1) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) break;
        }

        while (1) {
            start = nums[start];
            slow = nums[slow];
            if (start == slow) {
                return slow;
            }
        }
        return 0;
    }
};