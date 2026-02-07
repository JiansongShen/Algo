class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:

        if len(nums) < k or k == 0:
            return 0.0

        sum = 0.0
        maxSum = 0.0

        for i in range(k):
            sum += nums[i]
        
        maxSum = sum
        
        for i in range(k, len(nums)):
            sum += nums[i]
            sum -= nums[i - k]

            if sum > maxSum:
                maxSum = sum

        return maxSum / k