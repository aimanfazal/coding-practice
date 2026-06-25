/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    int minDepth(Node *root) {
        // code here
        if (!root)
            return 0;
        
        int leftSub = minDepth(root->left);
        int rightSub = minDepth(root->right);
        
        if (!leftSub) return rightSub + 1;
        if (!rightSub) return leftSub + 1;
        
        return min(rightSub, leftSub) + 1;
    }
};