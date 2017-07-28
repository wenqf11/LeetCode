#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<string> st;
    st.push_back("10");
    st.push_back("0001");
    st.push_back("111001");
    st.push_back("0");
    st.push_back("1");
    cout << s.findMaxForm(st, 5, 3) << endl;
}