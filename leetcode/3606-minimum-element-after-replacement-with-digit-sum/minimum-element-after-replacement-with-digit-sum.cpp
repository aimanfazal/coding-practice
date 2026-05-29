class Solution {
public:

    int digSum(int n) {
        int ans = 0;
        while (n > 0) {
            ans += n % 10;
            n = n / 10;
        }
        return ans;
    }
    
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++)
           nums[i] = digSum(nums[i]);
        
        for (int i = 0; i < nums.size(); i++)
            ans = min(ans, nums[i]);
        
        return ans;
        
    }
};