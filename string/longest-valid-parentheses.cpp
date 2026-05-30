class Solution {
public:
    int longestValidParentheses(string s) {
        if(s == ""){
            return 0;
        }
        stack<char> t;
        int count = 0;
        int temp = 0;
        for(char c: s){
            if(c == '('){
                t.push(c);
            }
            else{
                if(t.empty() == false){
                    t.pop();
                    temp += 2;
                    count = max(count,temp);
                }
                else{
                    while(!t.empty()){
                        t.pop();
                    }
                    temp = 0;
                }
            }
        }
        return count;
    }
};