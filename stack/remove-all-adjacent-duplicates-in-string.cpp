class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> stack;
        string out = "";
        for(int i = 0; i < s.length(); i++){
            if(stack.empty()){
                stack.push(s[i]);
            }
            else{
                if(stack.top() == s[i]){
                    stack.pop();
                }
                else{
                    stack.push(s[i]);
                }
            }
        }
        while(!stack.empty()){
            out+= stack.top();
            stack.pop();
        }
        reverse(out.begin(), out.end());
        return out;
    }
};