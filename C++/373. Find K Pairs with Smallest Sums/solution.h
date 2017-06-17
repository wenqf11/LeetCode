#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;


class Solution {
public:
    vector< pair<int, int> > kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector< pair<int, int> > res;
        vector<int> idx(nums1.size(), 0);
        int size = min(k, int(nums1.size() * nums2.size()));
        int t = 0, minSum;
        for (int i = 0; i < size; ++i) {
            t = 0;
            minSum = INT_MAX;
            for (int j = 0; j < nums1.size(); ++j) {
                if (idx[j] < nums2.size() && minSum > nums1[j] + nums2[idx[j]]) {
                    t = j;
                    minSum = nums1[j] + nums2[idx[j]];
                }
            }
            res.push_back(make_pair(nums1[t], nums2[idx[t]]));
            ++idx[t];
        }
        return res;
    }
};