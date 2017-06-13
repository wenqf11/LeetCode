#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
        char a[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'} ;
        set<char> m(a, a + 10);
        int n = s.size();
        int i = 0, j = n - 1;
        while (i < j) {
            while (i < n && m.find(s[i]) == m.end()) ++i;
            while (j >= 0 && m.find(s[j]) == m.end()) --j;
            if (i <= j ) {
                swap(s[i], s[j]);
                ++i;
                --j;
            }
        }
        return s;
    }
};