
class Solution:
    def isVowel(self, c: str) -> bool:
        return c in {'a', 'e', 'i', 'o', 'u'}

    def maxVowels(self, s: str, k: int) -> int:
        if k == 0 or len(s) < k: 
            return 0
        max = 0
        curr = 0

        for i in range(k):
            if self.isVowel(s[i]):
                curr += 1

        max = curr
        if max == k:
            return k

        for i in range(k, len(s)):
            if self.isVowel(s[i]):
                curr += 1
            if (self.isVowel(s[i - k])):
                curr -= 1

            if curr > max:
                max = curr
                if max == k:
                    return max


        return max

