class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool nz = false;

        for (auto x: nums) {
            xr ^= x;
            if (x)
                nz = true; 
        }

        if (xr)
            return nums.size();
        else if (nz)
            return nums.size() - 1;
        else
            return 0;
    }
};