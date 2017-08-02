#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        stack<char> st;
        std::transform(S.begin(), S.end(), S.begin(), ::toupper);
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] != '-') {
                st.push(S[i]);
            }
        }
        string ans = "";
        int i = 0;
        while (!st.empty()) {
            ans = st.top() + ans;
            i ++ ;
            st.pop();
            if (i % K == 0 && !st.empty()) {
                ans = '-' + ans;
            }
        }
        return ans;
    }
};