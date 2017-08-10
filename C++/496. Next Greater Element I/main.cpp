#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums1, nums2;
    nums1.push_back(4);
    nums1.push_back(1);
    nums1.push_back(2);

    nums2.push_back(1);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(2);
    vector<int> ans = s.nextGreaterElement(nums1, nums2);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}