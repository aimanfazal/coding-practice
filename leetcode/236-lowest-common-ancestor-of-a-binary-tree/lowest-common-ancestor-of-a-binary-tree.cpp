/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root)
            return NULL;

        if (root == p || root == q)
            return root;
            
        TreeNode* leftPart = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightPart = lowestCommonAncestor(root->right, p, q);

        if (!leftPart && !rightPart)
            return NULL;
        else if (leftPart && !rightPart)
            return leftPart;
        else if (rightPart && !leftPart)
            return rightPart;
        else
            return root;
    }
};