class Solution {
	public:
	
	void insertElement(stack<int> &st, int num) {
		if (st.empty() || st.top() < num) {
			st.push(num);
			return;
		}
		
		int temp = st.top();
		st.pop();
		
		insertElement(st, num);
		
		st.push(temp);
	}
	
	void sortStack(stack<int> &st) {
		// code here
		if (st.empty())
			return;
		
		int temp = st.top();
		st.pop();
		
		sortStack(st);
		
		insertElement(st, temp);
		
	}   
};
