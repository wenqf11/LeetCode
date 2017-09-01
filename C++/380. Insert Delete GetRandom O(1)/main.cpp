#include <iostream>
#include "solution.h"

int main() {
    RandomizedSet* obj = new RandomizedSet();
    bool param_1 = obj->insert(5);
    bool param_2 = obj->insert(1);
    bool param_3 = obj->insert(3);
    bool param_4 = obj->remove(5);
    int param_5 = obj->getRandom();
    cout << param_5 << endl;
    return 0;
}