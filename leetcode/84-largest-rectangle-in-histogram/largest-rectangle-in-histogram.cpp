class Solution {
public:
    vector<int> prevSmallerElements(vector<int> data) {
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

    vector<int> nextSmallerElements(vector<int> data) {
        vector<int> ans(data.size());
        stack<int> st;
        st.push(-1);

        for (int i = data.size() - 1; i >= 0; i--) {
            while ( st.top() != -1 && data[st.top()] >= data[i])
                st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> prev = prevSmallerElements(heights);
        vector<int> next = nextSmallerElements(heights);

        int maxArea = INT_MIN;

        for (int i = 0; i < heights.size(); i++) {
            if (next[i] == -1)
                next[i] = heights.size();

            int area = heights[i] * (next[i] - prev[i] - 1);
            maxArea = max(area, maxArea);
        }

        return maxArea;
    }
};