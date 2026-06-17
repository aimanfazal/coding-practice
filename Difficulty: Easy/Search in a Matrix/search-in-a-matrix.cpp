class Solution {
	public:
	bool searchMatrix(vector<vector<int>> &mat, int x) {
		// code here
		for (auto& row : mat) {
			for (int num : row) {
				if (num == x)
					return true;
			}
		}
		return false;
	}
};
