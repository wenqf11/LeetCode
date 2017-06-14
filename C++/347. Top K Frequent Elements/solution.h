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
private:
    bool static compByValue(pair<int, int> &p1, pair<int, int> &p2) {
        return p1.second > p2.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]]++;
        }
        vector<pair<int, int> > vec (m.begin(), m.end());
        sort(vec.begin(), vec.end(), compByValue);
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(vec[i].first);
        }
        return res;
    }
};