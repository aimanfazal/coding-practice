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
    int minDepth(TreeNode* root) {
         if (!root)
            return 0;
        
        int leftSub = minDepth(root->left);
        int rightSub = minDepth(root->right);
        
        if (!leftSub) return rightSub + 1;
        if (!rightSub) return leftSub + 1;
        
        return min(rightSub, leftSub) + 1;
    }
};