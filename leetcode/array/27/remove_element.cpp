class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res {0};
        // use targetIdx to map the elements
        // the removing element, just like mapping the 
        // old elements to new place
        // e.g: remove 2
        // idx:  0  1  2  3  4  5  6
        // src: [1, 2, 2, 3, 4, 3, 2]
        // 
        // idx_n: 0  _  _  1  2  3  _        (new index)
        // arr_n:[1,     , 3, 4, 3   , _, _, _]
        int targetIdx {0};       
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) { // not equal, then
                nums[targetIdx] = nums[i];
                ++targetIdx;
            }
        }

        return targetIdx;
    }
};