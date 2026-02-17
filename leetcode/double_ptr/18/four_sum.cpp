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
// Created: 2026-02-17 20:37:24 by JiansongShen
// Updated: 2026-02-17 21:08:04
// 


#include <vector>

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    struct pair {
        int n1{}, n2{};
    };
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        
        int n = nums.size();
        if (n < 4) {
            return res;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++i) {
            if (i > 0 && i < n - 3 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n; ++j) {
                if (j > i + 1 && i < n - 2 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                int begin = j + 1;
                int end = n - 1;
                long needValue = static_cast<long>(target) - nums[i] - nums[j];

                while (begin < end) {
                    if (nums[begin] + nums[end] == needValue) {
                        res.push_back({nums[i], nums[j], nums[begin], nums[end]});
                        while (begin < end && nums[begin + 1] == nums[begin]) {
                            ++begin;
                        }
                        while (begin < end && nums[end - 1] == nums[end]) {
                            --end;
                        }
                        ++begin;
                        --end;
                    } else if (nums[begin] + nums[end] < needValue) {
                        while (begin < end && nums[begin + 1] == nums[begin]) {
                            ++begin;
                        }
                        ++begin;
                    } else {
                        while (begin < end && nums[end - 1] == nums[end]) {
                            --end;
                        }
                        --end;
                    }
                }
            }
        }

        return res;
    }
};