class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int sum = 0;
        for(string c: tokens){
            if(c == "+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a+b);}
            else if(c == "-"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b-a);}
            else if(c == "*"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a*b);}
            else if(c == "/"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b/a);}
            else{
                int num = stoi(c);
                s.push(num);
            }
        }
        return s.top();
    }
};