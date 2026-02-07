class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (k <= 0 || k > nums.size()) {
            return 0.0;
        }

        double sum = 0;
        double maxSum = 0;

        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        maxSum = sum;

        for (int i = k; i < nums.size(); ++i) {
            sum += nums[i];
            sum -= nums[i - k];

            if (sum > maxSum) {
                maxSum = sum;
            }
        }

        return maxSum / k;
    }
};