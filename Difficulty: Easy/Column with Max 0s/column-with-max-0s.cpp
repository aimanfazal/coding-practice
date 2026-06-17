class Solution {
public:
    int maxZeros(vector<vector<int>>& arr) {
        int n = arr.size();
        int ans = -1;
        int mx = 0;

        for (int j = 0; j < n; j++) {
            int cnt = 0;

            for (int i = 0; i < n; i++) {
                if (arr[i][j] == 0)
                    cnt++;
            }

            if (cnt > mx) {
                mx = cnt;
                ans = j;
            }
        }

        return ans;
    }
};