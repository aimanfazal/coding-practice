class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> checker(nums.size() + 1, false);
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
            checker[nums[i]] = true;

        for (int i = 0; i < checker.size(); i++)
            if (checker[i] == false) {
                ans = i;
                break;
            }
        
        return ans;
        
    }
};