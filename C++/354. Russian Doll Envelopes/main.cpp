#include <iostream>
#include "solution.h"

int main() {
    Solution s;

    vector< pair<int, int> > envelopes;
    envelopes.push_back(make_pair(1, 1));

    cout << s.maxEnvelopes(envelopes) << endl;

}