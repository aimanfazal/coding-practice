/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        if (!root)
            return false;
            
        if (root->data == key)
            return true;
        bool la, ra;
        if (root->left)
            la = search(root->left, key);
        if (root->right)
            ra = search(root->right, key);
            
        return la || ra;
    }
};