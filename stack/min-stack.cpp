class MinStack {
    stack<int> s;
    stack<int> m;

public:
    MinStack() {}
    void push(int val) {
        if(m.empty()){
            m.push(val);
        }
        else{
            if(val <= m.top()){
                m.push(val);
            }
        }
        s.push(val);
    }
    
    void pop() {
        if(s.top() == m.top()){
            m.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */