#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if (n == 0) {
            return res;
        }

        res.resize(n);
        for (int i = 0; i < n; ++i) {
            res[i] = vector<int>(n);
        }

        int currVal = 0;
        int currLayer = 0;
        int flag = n;

        while (flag > 0) {
            fill(currVal, flag, currLayer);
            flag -= 2;
            ++currLayer;
        }

        return res;
    }

    void fill(int &begin, int n, int currLayer) {
        for (int i = 0; i < n; ++i) {
            res[currLayer][i + currLayer] = ++begin;
        }
        for (int i = 1; i < n; ++i) {
            res[currLayer + i][currLayer + n - 1] = ++begin;
        }
        for (int i = n - 2; i >= 0; --i) {
            res[currLayer + n - 1][currLayer + i] = ++begin;
        }
        for (int i = n - 2; i > 0; --i) {
            res[currLayer + i][currLayer] = ++begin;
        }
   }
    vector<vector<int>> res = vector<vector<int>>();
        
};