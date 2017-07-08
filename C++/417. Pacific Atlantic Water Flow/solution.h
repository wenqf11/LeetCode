#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void dfs(vector< vector<int> >& matrix, vector< vector<bool> >& visited, int pre, int i, int j) {
        int m = matrix.size(), n = matrix[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n || visited[i][j] || matrix[i][j] < pre) return;
        visited[i][j] = true;
        dfs(matrix, visited, matrix[i][j], i - 1, j);
        dfs(matrix, visited, matrix[i][j], i + 1, j);
        dfs(matrix, visited, matrix[i][j], i, j - 1);
        dfs(matrix, visited, matrix[i][j], i, j + 1);
    }

    vector< pair<int, int> > pacificAtlantic(vector< vector<int> >& matrix) {
        vector< pair<int, int> > res;
        int m = matrix.size();
        if (m == 0) return res;
        int n = matrix[0].size();
        if (n == 0) return res;
        vector< vector<bool> > pacific(m, vector<bool>(n, 0));
        vector< vector<bool> > atlantic(m, vector<bool>(n, 0));
        for (int i = 0; i < m; ++i) {
            dfs(matrix, pacific, INT_MIN, i, 0);
            dfs(matrix, atlantic, INT_MIN, i, n - 1);
        }
        for (int i = 0; i < n; ++i) {
            dfs(matrix, pacific, INT_MIN, 0, i);
            dfs(matrix, atlantic, INT_MIN, m - 1, i);
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (pacific[i][j] && atlantic[i][j]) {
                    res.push_back(make_pair(i, j));
                }
            }
        }
        return res;
    }
};