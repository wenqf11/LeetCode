#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    vector<string> ans = s.findRelativeRanks(nums);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}