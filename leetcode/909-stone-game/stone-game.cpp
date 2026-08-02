class Solution {

public:
    // vector<vector<int>> dp;

    bool stoneGame(vector<int>& piles) {
        // dp.assign(piles.size(), vector<int>(piles.size(), INT_MIN));
        // return solution(piles, 0, piles.size() - 1) > 0;

        return true;
    }

// private:
//     int solution(vector<int>& data, int l, int r) {
//         if (l == r)
//             return data[l];

//         if (dp[l][r] != INT_MIN)
//             return dp[l][r];

//         int lc = data[l] - solution(data, l + 1, r);
//         int rc = data[r] - solution(data, l, r - 1);

//         return dp[l][r] = max(lc, rc);
//     }
};