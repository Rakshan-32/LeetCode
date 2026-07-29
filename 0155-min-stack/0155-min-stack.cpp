class MinStack {
public:
    stack<int> ms,stk;
    MinStack() {
    }
    
    void push(int value) {
        stk.push(value);
        if(ms.empty() || value<ms.top()){
            ms.push(value);
        }
        else{
            ms.push(ms.top());
        }
    }
    
    void pop() {
        stk.pop();
        ms.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return ms.top();
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