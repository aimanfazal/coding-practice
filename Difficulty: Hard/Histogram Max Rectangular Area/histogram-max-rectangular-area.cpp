class Solution {
	public:
	
	vector<int> nextSmallerIndex(vector<int> data) {
		vector<int> ans(data.size());
		stack<int> st;
		st.push(-1);
		
		for (int i = data.size() - 1; i >= 0; i--) {
			while (st.top() != -1 && data[st.top()] >= data[i])
			    st.pop();
			ans[i] = st.top();
			st.push(i);
		}
		
		return ans;
	}
	
	vector<int> prevSmallerIndex(vector<int> data) {
		vector<int> ans(data.size());
		stack<int> st;
		st.push(-1);
		
		for (int i = 0; i < data.size(); i++) {
			while (st.top() != -1 && data[st.top()] >= data[i])
			    st.pop();
			ans[i] = st.top();
			st.push(i);
		}
		
		return ans;
	}
	
	int getMaxArea(vector<int> &arr) {
		// code here
		vector<int> next = nextSmallerIndex(arr);
		vector<int> prev = prevSmallerIndex(arr);
		
		int maxArea = INT_MIN;
		
		for (int i = 0; i < arr.size(); i++) {
		    if (next[i] == -1)
		        next[i] = arr.size();
		        
		    int area = arr[i] * (next[i] - prev[i] - 1);
		    maxArea = max(area, maxArea);
		}
		
		return maxArea;
	}
};
