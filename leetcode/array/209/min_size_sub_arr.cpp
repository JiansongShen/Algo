class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res {static_cast<int>(nums.size() + 1)};
        int left {0};
        int currSum = {0};

        for (int right = 0; right < nums.size(); ++right) {
            currSum += nums[right];

            while (currSum >= target) {
                res = min(right - left + 1, res);
                currSum -= nums[left];
                left ++;
            }
        }

        return res == nums.size() + 1 ? 0 : res;

    }
};