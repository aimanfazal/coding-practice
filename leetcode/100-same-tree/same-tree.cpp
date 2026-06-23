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

    void build(TreeNode* root, vector<int> &data) {
        if (root == nullptr) {
            data.push_back(INT_MIN);
            return;
        }

        // using preorder traversal
        data.push_back(root->val);
        build(root->left, data);
        build(root->right, data);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> pTree;
        vector<int> qTree;

        build(p, pTree);
        build(q, qTree);

        return pTree == qTree;
    }
};