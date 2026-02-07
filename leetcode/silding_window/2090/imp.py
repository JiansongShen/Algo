from typing import List


class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        # i - k ~ i -> have k nums
        # i ~ i + k -> have k nums
        # i -> 1 nums
        if 2 * k + 1 > len(nums):
           return [-1] * len(nums)

        if k == 0:
            return nums

        res = []
        currSum = 0

        for i in range(k):
            res.append(-1)

        for i in range(2 * k + 1):
            currSum += nums[i]

        res.append(currSum // (2 * k + 1))

        for i in range(2 * k + 1, len(nums)):
        
            currSum += nums[i]
            currSum -= nums[i - 2 * k - 1]

            res.append(currSum // (2 * k + 1))

        for i in range(k):
            res.append(-1)


        return res
            
    
        