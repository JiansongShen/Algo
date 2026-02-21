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
// Created: 2026-02-20 19:37:07 by JiansongShen
// Updated: 2026-02-20 19:37:08
//

#include <bits/stdc++.h>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int k;
    cin >> k;

    string s;
    stringstream ss;
    cin >> s;
    auto substr= s.substr(s.length() - k);
    auto substr2 = s.substr(0, s.length() - k);
    cout << substr << substr2;

    return 0;
}