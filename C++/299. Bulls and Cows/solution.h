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
    string getHint(string secret, string guess) {
        vector<int> digit(10, 0);
        int bulls = 0, cows = 0, n = secret.size();
        for (int i = 0; i < n; i++) {
            if (secret[i] == guess[i]) {
                ++bulls;
            } else {
                ++digit[secret[i] - '0'];
            }
        }

        for (int i = 0; i < n; i++) {
            if (secret[i] != guess[i] && digit[guess[i] - '0']) {
                --digit[guess[i] - '0'];
                ++cows;
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};