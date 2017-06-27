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
    Solution(vector<int> nums): v(nums) {}

    int pick(int target) {
        int cnt = 0, res = -1;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] != target) continue;
            ++cnt;
            if (rand() % cnt == 0) res = i;
        }
        return res;
    }
private:
    vector<int> v;
};