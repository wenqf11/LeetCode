#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> nums1, nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums2.push_back(1);
    nums2.push_back(3);
    nums2.push_back(4);
    vector< pair<int, int> > res = s.kSmallestPairs(nums1, nums2, 4);
    for (auto r : res) {
        cout << r.first << " " << r.second << endl;
    }
}