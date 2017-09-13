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
private:
    vector<int> parse(string str) {
        int last = 0, a = 0, b = 0;
        for (int i = 1; i <= str.size(); ++i) {
            if (i == str.size() || str[i] == '+' || str[i] == '-') {
                if (str[i - 1] == 'x') {
                    if (i - 1 - last > 0 && str[i - 2] <= '9' && str[i - 2] >= '0') {
                        a += stoi(str.substr(last, i - 1 - last));
                    } else {
                        a += stoi(str.substr(last, i - 1 - last) + "1");
                    }
                } else {
                    b += stoi(str.substr(last, i - last));
                }
                last = i;
            }
        }
        vector<int> res;
        res.push_back(a);
        res.push_back(b);
        return res;
    }
public:
    string solveEquation(string equation) {
        string res = "";
        int ind = equation.find('=');
        vector<int> left = parse(equation.substr(0, ind));
        vector<int> right = parse(equation.substr(ind + 1, equation.size() - ind));

        if (left[0] == right[0]) {
            if (right[1] == left[1]) res = "Infinite solutions";
            else res = "No solution";
        }
        else {
            res = "x=" + to_string((right[1] - left[1]) / (left[0] - right[0]));
        }
        return res;
    }
};