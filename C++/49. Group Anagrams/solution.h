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
	template <typename T>
	std::vector<int> ordered(std::vector<T> const& values) {
		std::vector<int> indices(values.size());
		std::iota(begin(indices), end(indices), static_cast<int>(0));

		std::sort(
			begin(indices), end(indices),
			[&](int a, int b) { return values[a] < values[b]; }
		);
		return indices;
	}

	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> res;
		vector<string> strs_copy(strs);
		vector<int> index_vector(strs_copy.size(), 0);
		for (int i = 0; i < strs_copy.size(); ++i) {
			sort(strs_copy[i].begin(), strs_copy[i].end());
			index_vector[i] = i;
		}
		
		vector<int> index = ordered(strs_copy);
		sort(strs_copy.begin(), strs_copy.end());
		
		vector<string> s;
		s.push_back(strs[index[0]]);
		for (int i = 1; i < strs.size(); ++i) {
			if (strs_copy[i] != strs_copy[i - 1]) {
				res.push_back(s);
				s.clear();
				s.push_back(strs[index[i]]);
			} else {
				s.push_back(strs[index[i]]);
			}
		}
		res.push_back(s);


		return res;
	}
};