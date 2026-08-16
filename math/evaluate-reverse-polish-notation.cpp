class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int sum = 0;
        for(string c: tokens){
            if(c == "+"){
                int a = (int)s.top();
                s.pop();
                int b = (int)s.top();
                s.pop();
                s.push(a+b);}
            if(c == "-"){
                int a = (int)s.top();
                s.pop();
                int b = (int)s.top();
                s.pop();
                s.push(a+b);
                s.push(a-b);}
            if(c == "*"){
                int a = (int)s.top();
                s.pop();
                int b = (int)s.top();
                s.pop();
                s.push(a+b);
                s.push(a*b);}
            if(c == "/"){
                int a = (int)s.top();
                s.pop();
                int b = (int)s.top();
                s.pop();
                s.push(a+b);
                s.push(a/b);}
            else{
                int num = stoi(c);
                s.push(num);
            }
        }
        return s.top();
    }
};