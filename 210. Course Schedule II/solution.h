#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
#include <unordered_map>
using namespace std;


class Solution {
public:
	bool canFinish(int numCourses, vector< pair<int, int> >& prerequisites) {
		vector< vector<int> > outPoints(numCourses, vector<int>());
		vector<int> inDegree(numCourses, 0);
		for (int i = 0; i < prerequisites.size(); i++) {
			outPoints[prerequisites[i].first].push_back(prerequisites[i].second);
			inDegree[prerequisites[i].second]++;
		}

		stack<int> s;
		for (int i = 0; i < numCourses; i++) {
			if (inDegree[i] == 0) {
				s.push(i);
			}
		}
		while (!s.empty()) {
			int k = s.top();
			s.pop();
			for (int i = 0; i < outPoints[k].size(); i++) {
				inDegree[outPoints[k][i]]--;
				if (inDegree[outPoints[k][i]] == 0) {
					s.push(outPoints[k][i]);
				}
			}
		}

		for (int i = 0; i < numCourses; i++) {
			if (inDegree[i] != 0) return false;
		}
		return true;
	}
};