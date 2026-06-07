class MinStack {
public:
    vector<pair<int,int>> myStack;
    MinStack() {
        
    }
    
    void push(int value) {
            pair<int, int> p;
        if (myStack.empty()) {
            p = make_pair(value, value);
            myStack.push_back(p);
        }
        else {
            p.first = value;
            p.second = min(myStack.back().second, value);
            myStack.push_back(p);
        }
    }
    
    void pop() {
        if (myStack.empty())
            return;
        else
            myStack.pop_back();
    }
    
    int top() {
        return myStack.back().first;
    }
    
    int getMin() {
        return myStack.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */