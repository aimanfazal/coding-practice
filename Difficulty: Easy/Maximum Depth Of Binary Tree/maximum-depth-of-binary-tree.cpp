/* The Node structure is
class Node {
public:
    int data;
    Node* left;
    Node* right;

};
}; */

class Solution {
  public:
    int maxDepth(Node *root) {
        // code here
         if (root == NULL)
            return 0;

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        int ans = max(lh, rh) + 1;
        
        return ans;
    }
};
