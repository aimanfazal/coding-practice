class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (!k || nums.size() == 1)
            return;

        // for (int i = 0; i < k; i++) {
        //     int last = nums[nums.size() - 1];
        //     for (int j = nums.size() - 1; j > 0; j--)
        //         nums[j] = nums[j - 1];
        //     nums[0] = last;
        // }

        k %= nums.size(); 
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

        return;
    }
};