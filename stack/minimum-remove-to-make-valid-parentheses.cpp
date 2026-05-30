class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> t;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                t.push(i);
            }
            else if(s[i] == ')'){
                if(t.empty() == true){
                    s[i] = '!';
                }
                else{
                    t.pop();
                }
            }
        }
        while(t.empty() == false){
            s[t.top()] = '!';
            t.pop();
        }
        string res = "";
        for(char c: s){
            if(c != '!'){
                res = res + c;
            }
        }
        return res;
    }
};