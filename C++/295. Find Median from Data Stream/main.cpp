#include <iostream>
#include "solution.h"

int main() {
    MedianFinder* obj = new MedianFinder();
    obj->addNum(1);
    obj->addNum(3);
    obj->addNum(2);
    cout << obj->findMedian() << endl;
    delete obj;
}