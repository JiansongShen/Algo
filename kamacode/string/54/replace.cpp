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
// Created: 2026-02-20 16:58:36 by JiansongShen
// Updated: 2026-02-20 19:36:44
// 


#include <bits/stdc++.h>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string str;
    std::getline(cin, str);

    stringstream ss;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] <= '9' && str[i] >= '0') {
            ss << "number";
        } 
        else {
            ss << str[i];
        }
    }

    cout << ss.str() << endl;

    return 0;
}