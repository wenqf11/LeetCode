#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;

class UF {
private:
    int* id; // access to component id (site indexed)
    int length;
    int num; // number of components
public:
    UF(int N) {
        num = N;
        length = N;
        id = new int[N];
        for (int i = 0; i < N; i++)
            id[i] = i;
    }
    ~UF() {
        delete [] id;
    }

    int count() {
        return num;
    }

    bool connected(int p, int q) {
        return find(p) == find(q);
    }

    int find(int p) {
        return id[p];
    }

    void unionSet(int p, int q) {
        int pID = find(p);
        int qID = find(q);
        if (pID == qID) return;
        for (int i = 0; i < length; i++)
            if (id[i] == pID) id[i] = qID;
        num--;
    }
};


class Solution {
public:
    int findCircleNum(vector< vector<int> >& M) {
        int n = M.size();
        UF uSet(n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                if (i != j && M[i][j] == 1) {
                    uSet.unionSet(i, j);
                }
            }
        return uSet.count();
    }
};