class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s2.empty()){
            s1.push(x);
        }
        else{
            while(s2.empty() == false){
                int temp = s2.top();
                s2.pop();
                s1.push(temp);
            }
            s1.push(x);
        }
    }
    
    int pop() {
        if(s1.empty()){
            int temp = s2.top();
            s2.pop();
            return temp;
        }
        while(s1.empty() == false){
            int temp = s1.top();
            s1.pop();
            s2.push(temp);
        }
        int temp = s2.top();
        s2.pop();
        return temp;
    }
    
    int peek() {
        if(s1.empty()){
            return s2.top();
        }
        while(s1.empty() == false){
            int temp = s1.top();
            s1.pop();
            s2.push(temp);
        }
        return s2.top();
    }
    
    bool empty() {
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
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