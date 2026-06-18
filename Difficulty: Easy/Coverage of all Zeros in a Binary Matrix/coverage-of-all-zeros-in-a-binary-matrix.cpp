class Solution {
	public:
	
	bool checkAround(vector<vector<int>> mat, int i, int j, int row,
	int col, int &answer) {
		
		// UP
		for (int k = i - 1; k >= 0; k--)
			if (mat[k][j] == 1) {
			answer++;
			break;
		}
		
		// LEFT
		for (int k = j - 1; k >= 0; k--)
			if (mat[i][k] == 1) {
			answer++;
			break;
		}
		
		// DOWN
		for (int k = i + 1; k < row; k++)
			if (mat[k][j] == 1) {
			answer++;
			break;
		}
		
		// RIGHT
		for (int k = j + 1; k < col; k++)
			if (mat[i][k] == 1) {
			answer++;
			break;
		}
	}
	
	int findCoverage(vector<vector<int>> & mat) {
		// code here
		int answer = 0;
		int row = mat.size();
		int col = mat[0].size();
		
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++)
				if (mat[i][j] == 0)
					checkAround(mat, i, j, row, col, answer);
		}
		
		return answer;
	}
};
