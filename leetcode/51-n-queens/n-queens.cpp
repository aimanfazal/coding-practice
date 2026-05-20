class Solution {
public:
    void storeSolution(vector<vector<char>>& board, vector<vector<string>>& ans,
                       int n) {
        vector<string> temp;
        for (int i = 0; i < n; i++) {
            string output = "";
            for (int j = 0; j < n; j++)
                output.push_back(board[i][j]);
            temp.push_back(output);
        }
        ans.push_back(temp);
    }
    // using Hashing to optimize the solution
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> upDiaCheck;
    unordered_map<int, bool> loDiaCheck;

    // Only to check the three backward directions of the queen (TL, L, DL)
    bool isSafe(int row, int col, vector<vector<char>>& board, int n) {

        if (rowCheck[row])
            return false;
        if (upDiaCheck[n - 1 + col - row])
            return false;
        if (loDiaCheck[col + row])
            return false;

        return true;
    }

    void solve(vector<vector<char>>& board, vector<vector<string>>& ans, int n,
               int col) {

        if (col >= n) {
            storeSolution(board, ans, n);
            return;
        }

        for (int row = 0; row < n; row++) {

            // placing queen at correct spot
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                rowCheck[row] = true;
                upDiaCheck[n - 1 + col - row] = true;
                loDiaCheck[col + row] = true;

                // recursive call
                solve(board, ans, n, col + 1);

                // backtracking
                board[row][col] = '.';
                rowCheck[row] = false;
                upDiaCheck[n - 1 + col - row] = false;
                loDiaCheck[col + row] = false;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        int col = 0;

        solve(board, ans, n, col);

        return ans;
    }
};