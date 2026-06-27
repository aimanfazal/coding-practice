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
private:
    int heightFinder(TreeNode* root) {
        if (!root)
            return 0;

        int left = heightFinder(root->left);
        int right = heightFinder(root->right);

        return max(left, right) + 1;
    }

public:
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();

            int factor = abs(heightFinder(temp->left) - heightFinder(temp->right));
            if (factor > 1)
                return false;

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }

        return true;
    }
};