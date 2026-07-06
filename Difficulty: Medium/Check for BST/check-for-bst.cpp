/*
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
	
	private:
	bool main(Node *root, Node* min, Node* max) {
		if (!root)
			return true;
		
		if (min && root->data <= min->data)
			return false;
		if (max && root->data >= max->data)
			return false;
		
		return main(root->left, min, root) && main(root->right, root, max);
		
	}
	
	public:
	bool isBST(Node* root) {
		// code here
		return main(root, NULL, NULL);
	}
};