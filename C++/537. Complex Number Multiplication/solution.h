#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
using namespace std;


class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        string::size_type pos = a.find("+");
        int c = atoi(a.substr(0, pos).c_str());
        int d = atoi(a.substr(pos + 1, a.size() - 2 - pos).c_str());

        pos = b.find("+");
        int e = atoi(b.substr(0, pos).c_str());
        int f = atoi(b.substr(pos + 1, b.size() - 2 - pos).c_str());

        cout << c << " " << d << endl;
        cout << e << " " << f << endl;
        int ai = c * e - d * f;
        int bi = d * e + c * f;

        return to_string(ai) + "+" + to_string(bi) + "i";
    }
};