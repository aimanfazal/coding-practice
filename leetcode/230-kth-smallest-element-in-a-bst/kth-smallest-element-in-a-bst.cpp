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
    int kthSmallest(TreeNode* root, int k) {
        int ans;

        solution(root, k, ans);

        return ans;
    }

    void solution(TreeNode* root, int &k, int &ans) {
        if (!root || k < 0)
            return;

        solution(root->left, k, ans);
        if (--k == 0) {
            ans = root->val;
            return;
        }
        solution(root->right, k, ans);        
    }
};