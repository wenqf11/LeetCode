#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<string> words;
    words.push_back("Alaska");
    words.push_back("Peace");
    words.push_back("Dad");
    words.push_back("Hello");
    cout << s.findWords(words) << endl;
}