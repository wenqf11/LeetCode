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
    int kthSmallest(vector< vector<int> >& matrix, int k) {
        int n = matrix.size();
        int left = matrix[0][0], right = matrix[n - 1][n - 1];
        while (left < right) {
            int mid = left + ((right - left) >> 1);
            int temp = search_lower_than_mid(matrix, mid, n);
            if (temp < k) left = mid + 1;
            else right = mid;
        }
        return left;
    }

    int search_lower_than_mid(vector< vector<int> >& matrix, int x, int n) {
        int i = n - 1, j = 0, cnt = 0;
        while (i >= 0 && j < n) {
            if (matrix[i][j] <= x) {
                j++;
                cnt += i + 1;
            } else {
                --i;
            }
        }
        return cnt;
    }
};