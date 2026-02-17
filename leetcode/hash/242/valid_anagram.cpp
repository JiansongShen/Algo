#include <bits/stdc++.h>

using namespace std;

class HashSet {
public:
    HashSet() {
        init();
    }

    void add(char index) {
        ++hashSet[static_cast<int>(index - 'a')];
    }

    int get(char index) const {
        return hashSet[static_cast<int>(index - 'a')];
    }

    void init() {
        for (char c = 'a'; c <= 'z'; ++c) {
            hashSet[static_cast<int>(c - 'a')] = 0;
        }
    }

    bool operator==(const HashSet& other) const {
        for (char c = 'a'; c <= 'z'; ++c) {
            if (get(c) != other.get(c)) {
                    return false;
            }
        }
        return true;
    }
private:
    int hashSet[1 + static_cast<int>('z' - 'a')];
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        HashSet hs1;
        HashSet hs2;
        for (char c : s) {
            hs1.add(c);
        }
        for (char c : t) {
            hs2.add(c);
        }

        return hs1 == hs2;
    }
};