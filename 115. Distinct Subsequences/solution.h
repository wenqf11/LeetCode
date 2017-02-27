#pragma once
#include<vector>
#include<string>
#include<climits>
#include<cmath>
using namespace std;


class Solution {
public:
    int numDistinct(string s, string t) {
        if (s.size() == 0) return 0;
        int** f = new int*[s.size()];
        for(int i = 0; i < s.size(); i++){
            f[i] =  new int[t.size()];
        }

        f[0][0] = s[0]==t[0];
        for(int i = 1; i < s.size(); i++){
            if (s[i]==t[0]) {
                f[i][0] = f[i-1][0]+1;
            } else {
                f[i][0] = f[i-1][0];
            }
        }
        for(int i = 1; i < t.size(); i++){
            f[0][i] = 0;
        }

        for(int i = 1; i < s.size(); i++)
            for(int j = 1; j < t.size(); j++){
                f[i][j] = f[i-1][j];
                if(s[i] == t[j]) {
                    f[i][j] += f[i-1][j-1];
                }
            }

        int ans = f[s.size()-1][t.size()-1];

        for(int i = 0; i < s.size(); i++){
            delete [] f[i];
        }
        delete [] f;

        return ans;
    }
};