#include <iostream>
#include "solution.h"

// Unit Test

int main() {
    Solution s;
    vector<string> wordlist = {"hot", "dot", "dog", "lot", "log", "cog"};
    string beginWord = "hit", endWord = "cog";

    cout << s.ladderLength(beginWord, endWord, wordlist) << endl;
    return 0;
}
