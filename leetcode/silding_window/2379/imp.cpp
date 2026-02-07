class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int res = k;
        int cur = 0; // [cur]rent Flip Times needed to make all Black
        for (int i = 0 ;i < k; ++i) {
            if (blocks[i] == 'W') {
                ++cur;
            }
        }
        res = cur;

        for (int i = k; i < blocks.size(); ++i) {
            if (blocks[i] == 'W') {
                ++cur;
            }
            if (blocks[i - k] == 'W') {
                --cur;
            }
            res = min(cur, res);
        }

        return res;
    }
};