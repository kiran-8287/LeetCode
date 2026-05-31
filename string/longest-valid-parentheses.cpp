class Solution {
public:
    int longestValidParentheses(string s) {
        int res = 0;
        stack<int> t;
        t.push(-1);
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                t.push(i);
            }
            else{
                t.pop();
                if(!t.empty()){
                    res = max(res,i-t.top());
                }
                else{
                    t.push(i);
                }
            }
        }
        return res;
    }
};