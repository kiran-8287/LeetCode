class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                par.push(s[i]);
            }
            else if(par.empty()){
                return false;
            }
            
            else if(s[i]==')'&& par.top()=='('){
                par.pop();
            }
            else if(s[i]=='}'&& par.top()=='{'){
                par.pop();
            }
            else if(s[i]==']'&& par.top()=='['){
                par.pop();
            }
            else{
                return false;
            }
        }
        return par.empty();
    }
};