class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+"||tokens[i] == "-"||tokens[i] == "*"||tokens[i] == "/"){
                int m = s.top();
                s.pop();
                int n = s.top();
                s.pop();
                if(tokens[i] == "+"){s.push(n+m);}
                else if(tokens[i] == "-"){s.push(n-m);}
                else if(tokens[i] == "*"){s.push(n*m);}
                else if(tokens[i] == "/"){s.push(n/m);}
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};