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
    void inOrder(TreeNode* root, vector<int> &arr) {
        if (!root)
            return;
    
        inOrder(root->left, arr);
        arr.push_back(root->val);
        inOrder(root->right, arr);

    }

public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> data;

        inOrder(root, data);

        int ans = INT_MAX;

        for (int i = 0; i < data.size() - 1; i++)
            ans = min(ans, abs(data[i] - data[i+1]));

        return ans;
    }
};