
class Solution {
public:
    // cause the source array has numbers less than zero
    // so, if we just square them, then, we must get an
    // array like this: e.g
    // [9, 4, 1, 0, 16, 81]
    // but we discover that pattern, it is 
    // \     /
    //  \   /
    //   \ /
    // from big to small, then big again
    // => just merge them from side to middle
    // 
    vector<int> sortedSquares(vector<int>& nums) {
        if (nums.empty()) {
            return nums;
        }
        int n = nums.size();

        vector<int> res(n);
        int left = 0; 
        int right = n - 1;
        int target = n - 1;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                res[target--] = leftSquare;                
                ++left;
            } else {
                res[target--] = rightSquare;
                --right;
            }
        }

        return res;
  }
};