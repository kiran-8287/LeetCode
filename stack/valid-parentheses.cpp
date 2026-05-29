class Solution {
public:
    bool isValid(string s) {
        stack<char> box;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                box.push(s[i]);
            }
            else{
                if(box.empty() == true){
                    return false;
                }
                else if((s[i] == ')' and box.top() != '(') ||
                    (s[i] == ']' and box.top() != '[') ||
                    (s[i] == '}' and box.top() != '{')){
                    return false;
                }
                box.pop();
            }
        }
        return true;
    }
};