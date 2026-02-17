#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> resultSet; 
        unordered_set<int> numsSet(nums1.begin(), nums1.end());
        for (int num : nums2) {
            if (numsSet.find(num) != numsSet.end()) {
                resultSet.insert(num);
            }
        }
        return vector<int>(resultSet.begin(), resultSet.end());
    }
};
