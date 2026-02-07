from typing import List


class Solution:
    def numOfSubarrays(self, arr: List[int], k: int, threshold: int) -> int:

        res = 0
        thresholdSum = k * threshold
        currSum = 0

        for i in range(k):
            currSum += arr[i]

        if currSum >= thresholdSum:
            res += 1

        for i in range(k, len(arr)):
            currSum += arr[i]
            currSum -= arr[i - k]
            
            if currSum >= thresholdSum:
                res += 1

        return res
