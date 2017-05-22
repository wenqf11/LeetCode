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
	void splitString(const std::string& s, std::vector<std::string>& v, const std::string& c)
	{
		std::string::size_type pos1, pos2;
		pos2 = s.find(c);
		pos1 = 0;
		while (std::string::npos != pos2)
		{
			v.push_back(s.substr(pos1, pos2 - pos1));

			pos1 = pos2 + c.size();
			pos2 = s.find(c, pos1);
		}
		if (pos1 != s.length())
			v.push_back(s.substr(pos1));
	}

	string simplifyPath(string path) {
		vector<string> res, paths;
		splitString(path, paths, "/");
		for (int i = 0; i < paths.size(); i++) {
			if (paths[i] == "..") {
				if (res.size() > 0) {
					res.pop_back();
				}
			} else if (paths[i] != "." && paths[i] !="") {
				res.push_back(paths[i]);
			}
		}

		string str = "";
		for (int i = 0; i < res.size(); i++) {
			str += "/" + res[i];
		}
		if (str == "") {
			str = "/";
		}
		return str;
	}
};