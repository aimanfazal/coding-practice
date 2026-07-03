/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int> ans;
        if (!root)
            return ans;
            
        queue<Node*> q;
        q.push(root);
        
        bool direction = true;
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> temp(size);
            
            for (int i = 0; i < size; i++) {
                
                Node* frontNode = q.front();
                q.pop();
                int index = direction ? i : size - i - 1;
                temp[index] = frontNode->data;
                
                if (frontNode->left)
                    q.push(frontNode->left);
                
                if (frontNode->right)
                    q.push(frontNode->right);
            }
            
            direction = !direction;
            
            for (auto x : temp)
                ans.push_back(x);
        }
        
        return ans;
    }
};