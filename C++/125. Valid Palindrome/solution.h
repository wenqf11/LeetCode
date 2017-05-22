#pragma once
#include <vector>
#include <string>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool isAlphanumeric(char c) {
        if('a'<= c && c <='z') return true;
        if('A'<= c && c <='Z') return true;
        if('0'<= c && c <='9') return true;
        return false;
    }
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        //cout <<s <<endl;
        for (string::iterator it =s.begin(); it != s.end();){
            if (!isAlphanumeric(*it)){
                s.erase(it);
            } else {
                ++it;
            }
        }

        for(int i = 0; i <= s.length()/2; i++){
            if(s[i] != s[s.length()-1-i]) return false;
        }
        return true;
    }
};