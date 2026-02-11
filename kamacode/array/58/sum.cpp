// #include <bits/stdc++.h>
// #include <cmath>
// #include <cstddef>

// using namespace std;

// void caluSum(vector<int> &nums, vector<vector<int>> sums, int n);
// int getSum(vector<int> &nums, vector<vector<int>> sums, int i, int j);

// int main(){
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     vector<vector<int>> sums(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }

//     caluSum(nums, sums, n);
    
//     int begin, end;
//     while (cin >> begin) {
//         cin >> end;

//         long sum = 0;
//         int log2Val = 0;
//         for (;log2Val < end - begin; ++log2Val) {
//             if (1 << log2Val > end - begin) {
//                 break;
//             }
//         }
//         --log2Val;

//         while (begin < end) { 
//             int i = 0;
//             for (;i < begin; ++i) {
//                 if (begin % (1 << i) != 0 || i > log2Val) {break;} 
//             }
//             --i;
//             sum += getSum(nums, sums, i, begin / (1 << i));
//             begin += 1 << i;
//         }

//         cout << sum << endl;
//     }
// }

// void caluSum(vector<int>& nums, vector<vector<int>>& sums, int n) {
//     // sums [i][j] => the sum of [j * (2 << i), (j + 1) * (2 << i) - 1]
//     int sizeOfN = n / 2;
//     for (int i = 1; i < n; i *= 2) {
//         sums[i - 1] = vector<int>(sizeOfN);
//         for (int j = 0; j < sizeOfN; ++j) {
//             if (i == 1) {
//                 sums[i - 1][j] = nums[j * 2] + nums[j * 2 + 1];
//             } else {
//                 sums[i - 1][j] = sums[i - 1 - 1][j * 2] + sums[i - 1 - 1][j * 2 + 1];
//             }
//         }
//         sizeOfN >>= 1;
//     }
// }


// int getSum(vector<int> &nums, vector<vector<int>> sums, int i, int j) {
//     if (i == 0) {
//         return nums[j];
//     }
//     return sums[i - 1][j];
// }


#include <bits/stdc++.h>
#include <cmath>
#include <cstddef>

using namespace std;

using ll = long long;
int main(){
    int n;
    cin >> n;
    if (n == 0) {return 0;}
    vector<int> nums(n);
    vector<ll> sums(n);
    cin >> nums[0];
    sums[0] = nums[0];
    for (int i = 1; i < n; ++i) {
        cin >> nums[i];
        sums[i] = sums[i - 1] + nums[i];
    }

    ios::sync_with_stdio(false);
    cin.tie(0);
    int begin, end;
    while (cin >> begin) {
        cin >> end;

        if (begin == 0) {
            cout << sums[end] << endl;
            continue;
        }
        cout << sums[end] - sums[begin - 1] << endl;
    }
    return 0;
}