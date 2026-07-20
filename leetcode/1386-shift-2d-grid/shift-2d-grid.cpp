class Solution {

private:
    void helper(vector<vector<int>>& grid, int k) {

        while (k--) {

            int end = grid[grid.size() - 1][grid[0].size() - 1];

            for (int i = grid.size() - 1; i >=0; i--) {

                for (int j = grid[0].size() - 1; j >= 0; j--) {

                    if (i == 0 && j == 0)
                        grid[i][j] = end;
                    else if (j == 0)
                        grid[i][j] = grid[i - 1][grid[0].size() - 1];
                    else
                        grid[i][j] = grid[i][j - 1];
                }
            }
        }
    }

public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int size = grid.size() * grid[0].size();
        k = k % size;

        helper(grid, k);

        return grid;
    }
};