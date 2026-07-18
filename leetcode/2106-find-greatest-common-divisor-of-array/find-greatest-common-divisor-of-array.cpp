class Solution {

private:
    int helper(int a, int b) {

        while (b) {
            int temp = a % b;
            a = b;
            b = temp;
        }

        return a;
    }

public:
    int findGCD(vector<int>& nums) {
        int mx = INT_MIN, mn = INT_MAX;

        for (auto x: nums) {
            mx = max(x,mx);
            mn = min(x, mn);
        }

        return (helper(mx, mn));
    }
};