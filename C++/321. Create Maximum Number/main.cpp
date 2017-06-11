#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(3);
    nums1.push_back(4);
    nums1.push_back(6);
    nums1.push_back(5);

    nums2.push_back(9);
    nums2.push_back(1);
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(8);
    nums2.push_back(3);

    vector<int> res = s.maxNumber(nums1, nums2, 5);

    for (auto r : res) {
        cout << r << " ";
    }
}