
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (target > 9999 || target < -9999) {
           return -1;
        }
        
        // include the first and exclude the last index (1)
        int begin = 0;
        int end = nums.size();
        int mid = (begin + end) / 2;
        
        // why begin < end? why not use <= ?
        while (begin < end) {
            // because we said: include begin, but not end
            // so if begin == end, that means: we should check
            // begin, but we should not check begin, that is wrong
            // and, it might loop for ever.
            if (nums[mid] == target) {
                return mid;
            }
            // why begin is assigned to mid + 1
            // but end just assigned to end?
            if (nums[mid] < target) {
                begin = mid + 1;
            } else {
                end = mid;
            }

            // because the (1): we include the first one, but 
            // ignore the last one, so when we update the begin
            // or end, if we assign mid to begin, then the mid 
            // may be compared twice, for example, the begin is 4, the 
            // mid is 8, we have know that mid is not a correct value,
            // so just jump to mid + 1
            mid =  (begin + end) / 2;
        }

        return -1;
    }
};