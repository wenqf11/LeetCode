#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<vector<int>> num = {  };
	vector<Interval> intervals;
	intervals.push_back({ 1, 3 });
	intervals.push_back({ 4, 6 });
	intervals.push_back({ 8, 10 });
	intervals.push_back({ 15, 18 });
	s.insert(intervals, {2,5});
	system("pause");
	return 0;
}