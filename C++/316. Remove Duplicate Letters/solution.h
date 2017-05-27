#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <unordered_map>
using namespace std;


class Solution {
public:
    string removeDuplicateLetters(string s) {
        string res = "0";
        vector<int> m(256);
        vector<bool> isVisited(256, 0);
        for (int i = 0; i < s.size(); ++i) {
            m[s[i]]++;
        }

        for (int i = 0; i < s.size(); ++i) {
            --m[s[i]];
            if (isVisited[s[i]])  continue;
            while (s[i] < res.back() && m[res.back()] > 0) {
                isVisited[res.back()] = 0;
                res.pop_back();
            }
            res.push_back(s[i]);
            isVisited[s[i]] = true;
        }
        return res.substr(1);
    }
};