class Solution {
public:
    bool oneCheck(vector<vector<int>>& mat, int i, int j) {

        int count = 0;
        // iterarting over columns
        for (int k = 0; k < mat[0].size(); k++) {
            if (mat[i][k] == 1)
                count++;
            if (count > 1)
                return false;
        }

        // iterating over rows
        count = 0;
        for (int k = 0; k < mat.size(); k++) {
            if (mat[k][j] == 1)
                count++;
            if (count > 1)
                return false;
        }

        return true;
    }

    int numSpecial(vector<vector<int>>& mat) {

        int ans = 0;
        for (int i = 0; i < mat.size(); i++)
            for (int j = 0; j < mat[0].size(); j++)
                if (mat[i][j] == 1)
                    if (oneCheck(mat, i, j))
                        ans++;

        return ans;
    }
};