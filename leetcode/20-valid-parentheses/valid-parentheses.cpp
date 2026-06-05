class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;

        for (char x : s) {
            if (x == '(' || x == '[' || x == '{')
                myStack.push(x);
            else {
                if (!myStack.empty())
                    if (x == ')' && myStack.top() == '(' ||
                        x == ']' && myStack.top() == '[' ||
                        x == '}' && myStack.top() == '{')
                        myStack.pop();
                    else
                        return false;
                else
                    return false;
            }
        }

        return myStack.empty() ? true : false;
    }
};