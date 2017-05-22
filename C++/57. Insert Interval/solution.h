#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
	static bool cmp(const Interval& a, const Interval& b) {
		return a.start < b.start;
	}
	vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
		vector<Interval> mergedIntervals = intervals;
		mergedIntervals.push_back(newInterval);
		vector<Interval> result;
		sort(mergedIntervals.begin(), mergedIntervals.end(), cmp);
		result.push_back(mergedIntervals[0]);
		for (int i = 1; i < mergedIntervals.size(); i++) {
			if (mergedIntervals[i].start <= result.back().end) {
				result.back().end = max(result.back().end, mergedIntervals[i].end);
			}
			else {
				result.push_back(mergedIntervals[i]);
			}
		}
		return result;
	}
};