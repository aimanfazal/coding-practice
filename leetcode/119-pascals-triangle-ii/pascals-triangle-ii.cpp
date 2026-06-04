class Solution {
public:

    int nCr(int n, int r) {
        if (r > n)
            return 0;

        r = min(r, n-r);

        long long res = 1;
        for (int i = 0; i < r; i++)
            res = res * (n-i) / (i+1);
        return int(res);
    }
    vector<int> getRow(int rowIndex) {
        vector<int> ans;

        for (int i = 0; i <= rowIndex; i++) {
            if (i == 0 || i == rowIndex)
                ans.push_back(1);
            else
                ans.push_back(nCr(rowIndex, i));
        }

        return ans;
    }
};