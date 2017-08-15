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
    int findLUSlength(string a, string b) {
        int lena = a.size(), lenb = b.size();
        if (lena == lenb && isSubsequence(a, b)) return -1;
        return max(lena, lenb);
    }

    bool isSubsequence(string a, string b) {
        int j = 0;
        for (int i = 0; i < a.size(); ++i) {
            while (j < b.size() && b[j] != a[i]) {
                j++;
            }
            if (j == b.size()) return false;
        }
        return true;
    }
};