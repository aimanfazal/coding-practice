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
    void levelOrder(TreeNode* root, int &ans) {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* temp = q.front();
            if (temp)
                ans++;
            q.pop();
            if (temp && temp->left)
                levelOrder(temp->left, ans);
            if(temp && temp->right)
                levelOrder(temp->right, ans);
        }
    }

public:
    int countNodes(TreeNode* root) {
        int ans = 0;
        levelOrder(root, ans);
        return ans;
    }
};