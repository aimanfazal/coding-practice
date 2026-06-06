class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);
        vector<int> answer(n, 0);

        if (n == 1) {
            answer[0] = 0;
            return answer;
        }

        // left sum calculation
        for (int i = 1; i < n; i++) {
            int sum = 0;
            for (int j = i; j >= 1; j--)
                sum += nums[j - 1];
            leftSum[i] = sum;
        }

        // right sum calculation
        for (int i = n - 2; i>= 0; i--) {
            int sum = 0;
            for (int j = i; j < n-1; j++)
                sum += nums[j+1];
            rightSum[i] = sum;
        }

        // answer array calculation
        for (int i = 0; i < n; i++)
            answer[i] = abs(leftSum[i] - rightSum[i]);

        return answer;
    }
};