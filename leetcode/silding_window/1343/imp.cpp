class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int thresholdSum = k * threshold;
        int currSum = 0;
        int res = 0;

        for (int i = 0; i < k; ++i) {
            currSum += arr[i];
        }
        if (currSum >= thresholdSum) {
            ++res;
        }

        for (int i = k; i < arr.size(); ++i) {
            currSum += arr[i];
            currSum -= arr[i - k];
            if (currSum >= thresholdSum) {
                ++res;
            }
        }
        
        return res;

    }
};

