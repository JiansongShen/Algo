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
// Created: 2026-02-15 16:12:40 by JiansongShen
// Updated: 2026-02-15 16:37:06
// 

#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <unordered_set>
#include <variant>

using namespace std;
// Since n is an integer, n has at most 
// 12 digits and 12 * (9 * 9) < 1000,
// we can just use an array with 1000 boolean element
// to act as a hash set.
class Solution {
public:
    bool isHappy(int n) {
        const int maxSum = 1000;
        
        if (n == 1) {
            return true;
        }

        bool visited[maxSum] = {false};

        n = getNext(n);
        while (!visited[n]) {
            visited[n] = true;
            if (n == 1) {
                return true;
            }
            n = getNext(n);
        }

        return false;        
    }

    int getNext(int n) {
        int res = 0;

        while (n != 0) {
            int val = n % 10;
            res += val * val;
            n /= 10;
        }
        return res;
    } 
};

int main() {
    cout << Solution().getNext(19) << endl;
    cout << Solution().getNext(82) << endl;
    cout << Solution().getNext(68) << endl;
    cout << Solution().getNext(100) << endl;
    return Solution().isHappy(19);
}
