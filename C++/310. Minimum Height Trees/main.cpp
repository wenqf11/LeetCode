#include <iostream>
#include <utility>
#include "solution.h"

int main() {
    Solution s;

    int n = 4;
    vector< pair<int, int> > edges;
    edges.push_back(make_pair(1, 0));
    edges.push_back(make_pair(1, 2));
    edges.push_back(make_pair(1, 3));
    vector<int> res = s.findMinHeightTrees(n, edges);
    for (auto a : res) {
        cout << a << " ";
    }
}