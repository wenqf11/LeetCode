#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
public:
	vector< pair<int, int> > getSkyline(vector< vector<int> >& buildings) {
		vector< pair<int, int> > res, h;
		for (auto &a : buildings) {
			h.push_back(make_pair(a[0], -a[2]));
			h.push_back(make_pair(a[1], a[2]));
		}
		sort(h.begin(), h.end());

		int pre, cur;
		multiset<int> m;
		m.insert(0);
		for (auto &a : h) {
			if (a.second < 0) m.insert(-a.second);
			else m.erase(m.find(a.second));
			cur = *m.rbegin();
			if (cur != pre) {
				res.push_back(make_pair(a.first, cur));
				pre = cur;
			}
		}
		return res;
	}
};