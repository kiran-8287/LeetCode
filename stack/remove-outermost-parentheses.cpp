class Solution {
public:
    string removeOuterParentheses(string s) {
        stack <char> stack;
        string out = "";
        for(int i = 0;  i< s.length(); i++){
            if(s[i] == '('){
                if(stack.empty() == false){
                    out+= '(';
                }
                stack.push('(');
            }
            else if(s[i] == ')'){
                stack.pop();
                if(stack.empty() == false){
                    out+= ')';
                }
            }
        }
        return out;
    }
};