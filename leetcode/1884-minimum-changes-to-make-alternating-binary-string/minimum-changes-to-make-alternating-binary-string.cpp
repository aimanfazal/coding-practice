class Solution {
public:
    int minOperations(string s) {
        int ans = 0, n = s.length();

        for (int i = 0; i < n; i++)
            if  (s[i] - '0' != i % 2)
                ans++;

        return min(ans, n - ans);
    }
};