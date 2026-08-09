class Solution {
private:

    bool validity(vector<vector<int>> &mat, int i, int j) {
        int s = mat.size() - 1;
        return (i >= 0 && i <= s && j >= 0 && j <= s);
    }

    int solution(vector<vector<int>> &mat, int i, int j,
                 vector<vector<int>> &dp) {

        if (i == mat.size() - 1)
            return mat[i][j];

        if (dp[i][j] != -1)
            return dp[i][j];

        int ans = -1e9;

        for (int k = 0; k < mat.size(); k++) {
            if (j != k) {
                ans = max(ans, solution(mat, i + 1, k, dp));
            }
        }

        return dp[i][j] = mat[i][j] + ans;
    }

public:
    int zigzagSequence(vector<vector<int>> &mat) {

        int n = mat.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        int ans = -1e9;

        for (int i = 0; i < n; i++)
            ans = max(ans, solution(mat, 0, i, dp));

        return ans;
    }
};