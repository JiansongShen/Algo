#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> res;
        int minNumLen = 2 * k + 1;
        if (nums.size() < minNumLen) {
            res.resize(nums.size());
            for (int i = 0 ; i < nums.size(); ++i) {
                res[i] = -1;
            }
            return res;
        }

        if (k == 0) {
            return nums;
        }

        // maybe just use reverse and operator[] is better, but i am lazy
        for (int i = 0; i < k; ++i) {
            res.push_back(-1);
        }
        
        long sum = 0;
        for (int i = 0; i < minNumLen; ++i) {
            sum += nums[i];
        }
        
        res.push_back(sum / minNumLen);

        for (int i = minNumLen; i < nums.size(); ++i) {
            sum += nums[i];
            sum -= nums[i - minNumLen];
            res.push_back(sum / minNumLen);
        }
        
        for (int i = 0; i < k; ++i) {
            res.push_back(-1);
        }   
        return res;
    }
};