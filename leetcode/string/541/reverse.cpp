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
// Created: 2026-02-20 15:38:21 by JiansongShen
// Updated: 2026-02-20 16:55:21
// 

#include <bits/stdc++.h>

using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.length(); i += 2 * k) {
            if (i + k >= s.length()) {
                for (int j = 0; j < (s.length() - i) / 2; ++j) {
                    swap(s[j + i], s[s.length()- 1 - j]);
                }                
            } else {
                for (int j = 0; j < k / 2; ++j) {
                    swap(s[j + i], s[i + k - 1 - j]);
                }
            }
        }
        
        return s;
    }
};