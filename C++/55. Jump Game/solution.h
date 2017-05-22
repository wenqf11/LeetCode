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

class Solution {
public:
	bool canJump(vector<int>& nums) {
		int length = nums.size();
		if (length <= 1) return true;
		int *furthest = new int[length];
		int *from = new int[length];
		for (int i = 0; i < length; i++) {
			from[i] = -1;
		}
		int last = 0;
		for (int i = 0; i < length; i++) {
			furthest[i] = i + nums[i];
			if (i + 1 > last) last = i + 1;
			for(int j = last; j <= i+nums[i]; j++){
				if (j== length) break;
				if (from[j] == -1) {
					from[j] = i;
					last = j;
				}
			}
		}

		int index = from[length - 1];
		while (index != -1 && index != 0) {
			index = from[index];
		}
		if (index == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};