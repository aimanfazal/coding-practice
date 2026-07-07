/* Structure of a Tree Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};
*/

class Solution {
	
	private:
	// finds the inorder predecessor
	int maxVal(Node* root) {
		if (!root)
			return - 1;
		
		while (root->right)
			root = root->right;
		
		return root->data;
	}
	
	public:
	Node* delNode(Node* root, int x) {
		// code here
		if (!root)
			return NULL;
		
		if (root->data == x) {
			if (!root->left && !root->right)
				return NULL;
			else if (root->left && !root->right)
				return root->left;
			else if (!root->left && root->right)
				return root->right;
			else {
				int foundVal = maxVal(root->left);
				root->data = foundVal;
				root->left = delNode(root->left, foundVal);
				return root;
			}
		} else if (x > root->data)
		root->right = delNode(root->right, x);
		else
			root->left = delNode(root->left, x);
		
		return root;
	}
};
