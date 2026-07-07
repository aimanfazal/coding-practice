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
    // finds the inorder predecessor
    int maxVal(TreeNode* root) {
        if (!root)
            return -1;

        while (root->right)
            root = root->right;

        return root->val;
    }

public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return NULL;

        if (root->val == key) {
            if (!root->left && !root->right)
                return NULL;
            else if (root->left && !root->right)
                return root->left;
            else if (!root->left && root->right)
                return root->right;
            else {
                int foundVal = maxVal(root->left);
                root->val = foundVal;
                root->left = deleteNode(root->left, foundVal);
                return root;
            }
        } else if (key > root->val)
            root->right = deleteNode(root->right, key);
        else
            root->left = deleteNode(root->left, key);
        
        return root;
    }
};