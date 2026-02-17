// Copyright (c) 2026 JiansongShen
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     https://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// Email: jason.shen111@outlook.com
// GitHub: https://github.com/Jiansongshen
// 
// Created: 2026-02-15 16:38:50 by JiansongShen
// Updated: 2026-02-15 17:02:30
// 

#include <bits/stdc++.h>
#include <cstddef>
#include <pthread.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        
        int res = 0;
        unordered_map<int, int> tempSum;

        for (int i : nums1) {
            for (int j : nums2) {
                ++tempSum[i + j];
            }
        }

        for (int i : nums3) {
            for (int j : nums4) {
                if (tempSum.find(-i - j) != tempSum.end()) {
                    res += tempSum[-i - j];
                }
            }
        }
        
        return res;
    }
};