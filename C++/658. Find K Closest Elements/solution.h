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
private:
    int binarySearch(vector<int>& arr, int target) {
        int l = 0, r = arr.size();
        int mid;
        while (l <= r) {
            mid = (l + r) >> 1;
            if (arr[mid] > target) {
                r = mid - 1;
            } else if (arr[mid] < target) {
                l = mid + 1;
            } else {
                return mid;
            }
        }
        return mid;
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int index = binarySearch(arr, x);
        int left = index - 1, right = index + 1;
        int i = 1, n = arr.size();
        vector<bool> flag(n, 0);
        vector<int> res;
        flag[index] = true;
        while (i < k) {
            if (right == n || (left >= 0 && abs(arr[left] - x) <= abs(arr[right] - x))) {
                flag[left] = true;
                --left;
            } else {
                flag[right] = true;
                ++right;
            }
            ++i;
        }
        for (int i = 0; i < n; ++i) {
            if (flag[i]) res.push_back(arr[i]);
        }
        return res;
    }
};