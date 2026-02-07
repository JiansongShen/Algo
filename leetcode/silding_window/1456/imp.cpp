#include <cstddef>

using namespace std;

class Solution {
    public: 
        int maxVowels(string s, int k) {
            size_t currentNum = 0;
            size_t maxNum = 0;

            if (k ==0) {
                return 0;
            }

            for (size_t i = 0 ;i < k; ++i) {
                if (isVowel(s[i])) {
                    currentNum += 1;
                }
            }
            maxNum = currentNum;
            if (maxNum == k) {
                return maxNum;
            }

            for (size_t i = k; i < s.length(); ++i) {
                if (isVowel(s[i])) {
                    ++currentNum;
                }
                if (isVowel(s[i - k])) {
                    --currentNum;
                }
                if (currentNum == k) {
                    return currentNum;
                }
                maxNum = max(maxNum, currentNum);
            }

            return maxNum;
        }

        bool isVowel(char c){
            return c == 'a' ||
 c == 'e' ||
 c == 'i' ||
 c == 'o' ||
 c == 'u'; 
        }
};

int main() {

}