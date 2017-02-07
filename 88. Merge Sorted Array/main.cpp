#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	vector<int> nums1 = { 1,2,5 };
	vector<int> nums2 = {};
	s.merge(nums1, 3, nums2, 0);
	system("pause");
	return 0;
}