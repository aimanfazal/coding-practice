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
	
	private:
	void leftTraversal(Node* root, vector<int> &ans) {
		
		if (!root || !root->left && !root->right)
			return;
		
		ans.push_back(root->data);
		
		if (root->left)
			leftTraversal(root->left, ans);
		else
			leftTraversal(root->right, ans);
		
	}
	
	void leafTraversal(Node* root, vector<int> &ans) {
		if (!root)
			return;
		
		if (!root->left && !root->right)
			ans.push_back(root->data);
		
		leafTraversal(root->left, ans);
		leafTraversal(root->right, ans);
	}
	
	void rightTraversal(Node* root, vector<int> &ans) {
		
		if (!root || !root->left && !root->right)
			return;
		
		if (root->right)
			rightTraversal(root->right, ans);
		else
			rightTraversal(root->left, ans);
		
		ans.push_back(root->data);
	}
	
	public:
	vector<int> boundaryTraversal(Node *root) {
		// code here
		vector<int> ans;
		ans.push_back(root->data);
		
		leftTraversal(root->left, ans);
		
		leafTraversal(root->left, ans);
		leafTraversal(root->right, ans);
		
		rightTraversal(root->right, ans);
		
		return ans;
	}
};
