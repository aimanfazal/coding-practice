class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ms = INT_MIN, cs = 0;

        for (int i = 0; i < nums.size(); i++) {
            cs += nums[i];
            ms = max(cs, ms);
            if (cs < 0)
                cs = 0;
        }
        
        return ms;
    }
};

// this was a difficult one