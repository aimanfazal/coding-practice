/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void buildTree(TreeNode* root, vector<int> &data) {
        if (root == NULL)
            return;

        data.push_back(root->val);
        buildTree(root->left, data);
        buildTree(root->right, data);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        buildTree(root, answer);

        return answer;
    }
};