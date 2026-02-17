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
// Created: 2026-02-15 17:35:37 by JiansongShen
// Updated: 2026-02-17 20:13:51
// 
#include <algorithm>
#include <bits/stdc++.h>
#include <memory>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res{};
        int n = nums.size();

        sort(nums.begin(), nums.end());


        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int begin = i + 1, end = n - 1;
            
            while (begin < end) {
                int sum = nums[begin] + nums[end] + nums[i];
                if (sum == 0) {
                    res.push_back({nums[i], nums[begin], nums[end]});
                    while (begin < end && nums[begin] == nums[begin + 1]) {
                        ++begin;
                    }
                    while (begin < end && nums[end] == nums[end - 1]) {
                        --end;
                    }
                    ++begin;
                    --end;
                }
                if (sum < 0) {
                    while (begin < end && nums[begin] == nums[begin + 1]) {
                        ++begin;
                    } 
                }
                else {
                    while (begin < end && nums[end] == nums[end - 1]) {
                        --end;
                    }
                }
            }
        }

        return res;
    }
};

int main() {
    return 0;
}