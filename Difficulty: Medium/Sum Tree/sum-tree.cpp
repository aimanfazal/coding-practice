/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
    private:
        int sumFinder(Node* root) {
            if (!root)
                return 0;
                
            return root->data + sumFinder(root->left) + sumFinder(root->right);
        }
    
  public:
    bool isSumTree(Node* root) {
        // Your code here
        if (!root || (!root->left && !root->right))
            return true;
            
        if (root->left || root->right) 
            if (root->data != sumFinder(root->left) + sumFinder(root->right))
                return false;
        
        return isSumTree(root->left) && isSumTree(root->right);
    }
};