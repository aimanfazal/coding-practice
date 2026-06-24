/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	int height(Node* root) {
		// code here
		if (root == NULL)
			return -1;
		
		int lh = height(root->left);
		int rh = height(root->right);
		
		int ans = max(lh, rh) + 1;
		
		return ans;
	}
};
