#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
	string fractionToDecimal(int numerator, int denominator) {
		string decimal;
		unordered_map<int, int> map;

		if (numerator == 0) return "0";
		if (numerator < 0 ^ denominator < 0 ) decimal += '-';

		long long numeratorL = numerator;
		long long denominatorL = denominator;

		numeratorL = abs(numeratorL);
		denominatorL = abs(denominatorL);

		long long tmp = numeratorL / denominatorL;

		stringstream ss;
		ss << tmp;
		decimal += ss.str();

		numeratorL = numeratorL % denominatorL;
		if (numeratorL == 0) {
			return decimal;
		} else {
			decimal += '.';
		}

		while (numeratorL != 0) {
			if (map.find(numeratorL) != map.end()) {
				decimal.insert(map[numeratorL], 1, '(');
				decimal += ')';
				break;
			}
			map[numeratorL] = decimal.size();
			numeratorL *= 10;
			char bit = numeratorL / denominatorL + '0';
			decimal = decimal + bit;
			numeratorL = numeratorL % denominatorL;
		}
		return decimal;
	}
};