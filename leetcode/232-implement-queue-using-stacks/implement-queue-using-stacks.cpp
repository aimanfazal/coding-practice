class MyQueue {

private:
    void insertBottom(stack<int> &st, int num) {
        if (st.empty()) {
            st.push(num);
            return;
        }

        int temp = st.top();
        st.pop();

        insertBottom(st, num);

        st.push(temp);
    }

public:
    stack<int> st;

    MyQueue() {
        
    }
    
    void push(int x) {
        insertBottom(st, x);
    }
    
    int pop() {
        int temp = st.top();
        st.pop();
        return temp;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty() ? true : false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */