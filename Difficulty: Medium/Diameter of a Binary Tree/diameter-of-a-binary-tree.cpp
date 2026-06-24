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
	pair<int, int> solution(Node* root) {
		// first is the diameter, second is the height
		if (!root) {
			pair<int, int> p = make_pair(0, 0);
			return p;
		}
		
		pair<int, int> left = solution(root->left);
		pair<int, int> right = solution(root->right);
		
		int l = left.first;
		int r = right.first;
		int b = left.second + right.second + 1;
		
		pair<int, int> ans;
		ans.first = max(b, max(l, r));
		ans.second = max(left.second, right.second) + 1;
		
		return ans;
	}
	
	public:
	int diameter(Node* root) {
		// code here
		return solution(root).first - 1;
		
	}
};
