#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <map>
using namespace std;


struct frac {
    int a, b;
    frac(int x, int y) {
        a = x;
        b = y;
    }
};

class Solution {
private:
    int gcd(int a, int b) {
        if ( a % b == 0) return b;
        else return gcd(b, a % b);
    }

    void getCommonDenominator(vector<frac>& fractions) {
        int x = fractions[0].b, y;
        for (int i = 0; i < fractions.size(); ++i) {
            y = fractions[i].b;
            x = x / gcd(x, y) * y;
        }

        for (int i = 0; i < fractions.size(); ++i) {
            fractions[i].a *= x / fractions[i].b;
            fractions[i].b = x;
        }
    }

public:
    string fractionAddition(string expression) {
        vector<frac> fractions;
        int prev = 0;
        for (int i = 0; i < expression.size(); ++i) {
            if (expression[i] == '/') {
                int a = stoi(expression.substr(prev, i - prev));
                int j = i + 1;
                while (j < expression.size() && expression[j] <= '9' && expression[j] >= '0') {
                    ++j;
                }
                int b = stoi(expression.substr(i + 1, j - i));
                prev = j;
                fractions.push_back(frac(a, b));
            }
        }

        getCommonDenominator(fractions);

        int numerator = 0, denominator = fractions[0].b;
        for (int i = 0; i < fractions.size(); ++i) {
            numerator += fractions[i].a;
        }

        bool isNeg = false;
        if (numerator < 0) {
            numerator = -numerator;
            isNeg = true;
        }

        int maxDivisor = gcd(numerator, denominator);
        numerator /= maxDivisor;
        denominator /= maxDivisor;
        if (isNeg) {
            return "-" + to_string(numerator) + "/" + to_string(denominator);
        } else {
            return to_string(numerator) + "/" + to_string(denominator);
        }
    }
};