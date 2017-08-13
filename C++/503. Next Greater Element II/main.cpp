#include "solution.h"

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    vector<int> ans = s.nextGreaterElements(nums);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}