#include <bits/stdc++.h>
#include <vector>

using namespace std;

template<size_t size>
class HashSet {
public:
    HashSet() {
        init();
    }

    void add(const int index) {
        hashSet[static_cast<int>(index)] = 1;
    }

    int get(const int index) const {
        return hashSet[index];
    }

    void init() {
        for (int i = 0; i < size; ++i) {
            hashSet[i] = 0;
        }
    }

    bool exist(const int index) const {
        return hashSet[index];
    }
private:
    bool hashSet[size];
};

constexpr int sizeNum = 1000;
static HashSet<sizeNum> hs1;
static HashSet<sizeNum> hs2;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        hs1.init();
        hs2.init();

        for (int num: nums1) {
            hs1.add(num);
        }

        for (int num: nums2) {
            hs2.add(num);
        }

        vector<int> res{};
        for (int i = 0; i < sizeNum; ++i) {
            if (hs1.exist(i) == hs2.exist(i) && hs1.exist(i)) {
                res.push_back(i);
            }
        }

        return res;
    }
};