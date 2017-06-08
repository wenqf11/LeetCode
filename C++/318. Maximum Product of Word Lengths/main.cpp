#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<string> words;
    words.push_back("abcw");
    words.push_back("baz");
    words.push_back("foo");
    words.push_back("bar");
    words.push_back("xtfn");
    words.push_back("abcdef");
    cout << s.maxProduct(words) << endl;
}