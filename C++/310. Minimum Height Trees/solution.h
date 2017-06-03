#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <unordered_set>
using namespace std;


class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector< pair<int, int> >& edges) {
        vector<int> res;
        vector<int> depth(n, 0);
        vector< unordered_set<int> > adj(n);
        queue<int> q;
        for (int i = 0; i < edges.size(); ++i) {
            adj[edges[i].first].insert(edges[i].second);
            adj[edges[i].second].insert(edges[i].first);
        }

        for (int i = 0; i < n; i++) {
            if (adj[i].size() == 1) {
                q.push(i);
                depth[i] = 1;
            }
        }

        int visited = 0, maxDepth = 0;
        while (!q.empty()) {
            int k = q.front();
            ++visited;
            q.pop();
            for (auto a : adj[k]) {
                maxDepth = max(maxDepth, depth[a]);
                adj[a].erase(k);
                if (adj[a].size() == 1) {
                    q.push(a);
                    depth[a] = depth[k] + 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (depth[i] == maxDepth) res.push_back(i);
        }
        return res;
    }
};