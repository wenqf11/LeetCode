#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <unordered_map>
using namespace std;


class MedianFinder {
private:
    priority_queue<int> small, large;
public:
    /** initialize your data structure here. */
    MedianFinder() {

    }

    void addNum(int num) {
        if (small.empty() || num <= small.top()) {
            small.push(num);
            if (small.size() > large.size() + 1) {
                large.push(-small.top());
                small.pop();
            }
        } else {
            large.push(-num);
            if (large.size() > small.size()) {
                small.push(-large.top());
                large.pop();
            }
        }
    }

    double findMedian() {
        return small.size() > large.size() ? small.top() : 0.5 * (small.top() - large.top());
    }
};