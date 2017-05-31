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
    bool isValidNumer(const string& st) {
        if (st.size() > 1 && st[0] == '0') return false;
        return true;
    }

    bool isMatch(const string& st,  const string& num, int j) {
        int n = st.size();
        if (num.size() < j + n) return false;
        for (int i = 0; i < n; ++i) {
            if (st[i] != num[j + i]) return false;
        }
        return true;
    }

    bool isAdditiveNumber(string num) {
        string num1, num2, sumStr;
        long long n1, n2, sum;
        for (int i = 1; i <  num.size(); ++i) {
            for (int j = i + 1; j < num.size(); ++j) {
                num1 = num.substr(0, i);
                num2 = num.substr(i, j - i);
                if (!isValidNumer(num1) || !isValidNumer(num2)) continue;
                n1 = atoi(num1.c_str());
                n2 = atoi(num2.c_str());
                sum = n1 + n2;
                sumStr = to_string(sum);


                int k = j;
                while (isMatch(sumStr, num, k)) {
                    k += sumStr.size();
                    if (k == num.size()) {
                        return true;
                    }
                    num1 = num2;
                    num2 = sumStr;
                    n1 = atoi(num1.c_str());
                    n2 = atoi(num2.c_str());
                    sum = n1 + n2;
                    sumStr = to_string(sum);
                }
            }
        }
        return false;
    }
};