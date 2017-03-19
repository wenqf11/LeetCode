#pragma once
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
private:
	vector<int> ordered(vector<int> const& values) {
		vector<int> indices(values.size());
		size_t n(0);
		generate(begin(indices), end(indices), [&] { return n++; });
		std::sort(begin(indices), end(indices), [&](int a, int b) { return values[a] < values[b]; });
		return indices;
	}

public:
	int candy(vector<int>& ratings) {
		if (ratings.size() == 0) return 0;
		vector<int> indices = ordered(ratings);
		vector<int> candies(ratings.size(), 0);
		int sum = 0;

		for (int i = 0; i < indices.size(); i++) {
			int ind = indices[i];
			candies[ind] = 1;

			if (ind > 0 && candies[ind - 1] != 0) {
				if (ratings[ind] > ratings[ind - 1]) {
					candies[ind] = candies[ind - 1] + 1;
				} else {
					candies[ind] = 1;
				}
			}

			if (ind < ratings.size() - 1 && candies[ind + 1] != 0) {
				if (ratings[ind] > ratings[ind + 1]) {
					candies[ind] = max(candies[ind], candies[ind + 1] + 1);
				} else {
					candies[ind] = max(candies[ind], 1);
				}
			}

			sum += candies[ind];
		}
		return sum;
	}
};