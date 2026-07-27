class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int idx = -1;
        int a = INT_MIN;
        int b = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > a) {
                idx = i;
                a = nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i != idx && nums[i] > b)
                b = nums[i];
        }

        a--;
        b--;

        return a*b;
    }
};