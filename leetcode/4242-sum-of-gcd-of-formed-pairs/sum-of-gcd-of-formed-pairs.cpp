class Solution {

private:
    int finder(int a, int b) {

        while (b) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

public:
    long long gcdSum(vector<int>& nums) {

        vector<int> prefixGCD(nums.size(), 0);

        int mx = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefixGCD[i] = finder(mx, nums[i]);
        }

        sort(prefixGCD.begin(), prefixGCD.end());

        long long sum = 0;

        for (int i = 0, j = prefixGCD.size() - 1; i < j; i++, j--)
            sum += finder(prefixGCD[i], prefixGCD[j]);

        return sum;
    }
};