class MyStack {
public:
    queue<int> q1;
    MyStack() {
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        for(int i = 0; i < q1.size()-1;i++){
            int y = q1.front();
            q1.pop();
            q1.push(y);
        }
        int out = q1.front();
        q1.pop();
        return out;
    }
    
    int top() {
        for(int i = 0; i < q1.size()-1;i++){
            int y = q1.front();
            q1.pop();
            q1.push(y);
        }
        int out = q1.front();
        q1.pop();
        q1.push(out);
        return out;
    }
    
    bool empty() {
        if(q1.size() == 0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */