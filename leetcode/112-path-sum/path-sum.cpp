/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
    void solution(TreeNode* root, int targetSum, int currSum,
                  vector<vector<int>>& ans, vector<int> temp) {

        if (!root)
            return;

        temp.push_back(root->val);
        currSum += root->val;

        if (!root->left && !root->right) {
            if (currSum == targetSum)
                ans.push_back(temp);
            return;
        }

        solution(root->left, targetSum, currSum, ans, temp);
        solution(root->right, targetSum, currSum, ans, temp);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;

        solution(root, targetSum, sum, ans, temp);

        return !ans.empty();
    }
};