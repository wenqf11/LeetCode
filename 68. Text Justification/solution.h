#pragma once
#include<vector>
#include<string>
#include<cstring>
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
	vector<string> fullJustify(vector<string>& words, int maxWidth) {
		int i = 0;
		vector<string> result;
		while (i < words.size()) {
			int line_length = words[i].length();
			int former = i;
			while (i + 1 < words.size() && line_length + words[i + 1].length() + 1 <= maxWidth) {
				line_length += words[i + 1].length()+1;
				i++;
			}
			int lineOfWords = i - former + 1;
			if (lineOfWords == 1) {
				int extraSpaces = (maxWidth - line_length);
				string str = words[former];
				for (int k = 0; k < extraSpaces; k++) str += " ";
				result.push_back(str);
				i++;
				continue;
			}
			int spacesBetweenWords = (maxWidth - line_length) / (lineOfWords - 1);
			int extraSpaces = (maxWidth - line_length) - (lineOfWords - 1)*spacesBetweenWords;
			
			string str = words[former];
			
			if (i == words.size() - 1) {
				extraSpaces = (maxWidth - line_length);
				for (int j = former + 1; j <= i; j++) {
					
					str += " " + words[j];
				}
				for (int k = 0; k < extraSpaces; k++) str += " ";
				result.push_back(str);
				i++;
				continue;
			}
			for (int j = former+1; j <= i; j++) {
				for (int k = 0; k < spacesBetweenWords; k++) str += " ";
				if (extraSpaces > 0) {
					extraSpaces--;
					str += " ";
				}
				str += " " + words[j];
			}
			result.push_back(str);
			i++;
		}
		return result;
	}
};