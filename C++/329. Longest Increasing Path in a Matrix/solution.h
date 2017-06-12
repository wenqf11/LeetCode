#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;

struct data {
    int number;
    int x, y;
};

class Solution {
public:
    static bool compare(const data &a, const data &b) {
        return a.number < b.number;
    }

    int longestIncreasingPath(vector< vector<int> >& matrix) {
        int m = matrix.size();
        if (m == 0) return 0;
        int n = matrix[0].size();

        vector<data> items(m * n);
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) {
                items[i * n + j].x = i;
                items[i * n + j].y = j;
                items[i * n + j].number = matrix[i][j];
            }

        sort(items.begin(), items.end(), compare);

        int ans = 1;
        int dx[] = { 1 , -1, 0 , 0 };
        int dy[] = { 0 , 0 , 1 , -1 };
        vector< vector<int> > dp(m, vector<int>(n, 1));

        for (int i = 0; i < items.size(); ++i) {
            for (int j = 0; j < 4; j++) {
                int nx = items[i].x + dx[j];
                int ny = items[i].y + dy[j];
                if (nx >= 0 && ny >= 0 && nx < m && ny < n && matrix[nx][ny] > matrix[items[i].x][items[i].y]) {
                    dp[nx][ny] = max(dp[nx][ny], dp[items[i].x][items[i].y] + 1);
                    ans = max(ans, dp[nx][ny]);
                }
            }
        }

        return ans;
    }
};