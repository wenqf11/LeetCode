#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

// Definition for a point.
struct Point {
	int x;
	int y;
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

class Solution {
public:
	int maxPoints(vector<Point>& points) {
		int ans = 0;
		for (int i = 0; i < points.size(); ++i) {
			map<pair<int, int>, int> m;
			int numOfDuplicatePoints = 1;
			for (int j = i + 1; j < points.size(); ++j) {
				if (points[i].x == points[j].x && points[i].y == points[j].y) {
					++numOfDuplicatePoints;
					continue;
				}
				int dx = points[j].x - points[i].x;
				int dy = points[j].y - points[i].y;
				int d = gcd(dx, dy);
				++m[ make_pair(dx / d, dy / d)];
			}
			ans = max(ans, numOfDuplicatePoints);
			for (auto it = m.begin(); it != m.end(); ++it) {
				ans = max(ans, it->second + numOfDuplicatePoints);
			}
		}
		return ans;
	}
	int gcd(int a, int b) {
		return (b == 0) ? a : gcd(b, a % b);
	}
};