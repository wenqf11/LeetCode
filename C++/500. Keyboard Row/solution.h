#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        string word;
        for (int i = 0; i < words.size(); ++i) {
            word = words.size();
            int one = 0, two = 0, three = 0;
            for (char c : word) {
                if (c < 'a') c += 32;
                if (row1.count(c)) one = 1;
                if (row2.count(c)) two = 1;
                if (row3.count(c)) three = 1;
                if (one + two + three > 1) break;
            }
            if (one + two + three == 1) res.push_back(word);
        }
        return res;
    }
};