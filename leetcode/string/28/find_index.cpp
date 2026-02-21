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
// Created: 2026-02-21 11:12:04 by JiansongShen
// Updated: 2026-02-21 11:58:29
// 

#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int result {-1};

        std::vector<int> next(needle.length());
        int m = needle.length();
        if (m == 0) {
            return 0;
        }

        int i = 0;
        int j = 0;
        next[i] = -1;

        while (i < m) {
            if (needle[j] == needle[i]) {
                ++j;
                next[i] = j;
                if (needle[i] == needle[j]) {
                    next[i] = next[j];
                }
                ++i;
            } else {
                int k = i - 1;
                while (k > j && j >= 0) {
                    
                }
            }
        }

        return result;
    }
};