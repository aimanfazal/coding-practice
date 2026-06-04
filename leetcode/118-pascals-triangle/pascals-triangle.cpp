class Solution {
public:
    int nCr(int n, int r) {
        if (n == r || r == 0)
            return 1;
        else if (r == 1)
            return n;
        r = min(r, n - r);
        int res = 1;
        for (int i = 0; i < r; i++)
            res = res * (n - i) / (i + 1);
        
        return res;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;

        for (int i = 0; i < numRows; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++)
                temp.push_back(nCr(i, j));

            pascal.push_back(temp);
        }
        return pascal;
    }
};