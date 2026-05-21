class Solution {
public:
    int digitSum(int n) {
        int ans = 0;

        while (n > 0) {
            ans += n % 10;
            n = n / 10;
        }

        return ans;
    }

    int differenceOfSum(vector<int>& nums) {

        int eleSum = 0, digSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            eleSum += nums[i];

            digSum += digitSum(nums[i]);
        }

        return abs(eleSum - digSum);
    }
};