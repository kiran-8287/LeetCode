class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int n = 0;
        char op = '+';
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                n = n*10 + (s[i]-'0');
            }
            if((!isdigit(s[i]) && s[i] != ' ') || i == s.size()-1){
                if(op == '+'){
                    st.push(n);
                }
                else if(op == '-'){
                    st.push(-n);
                }
                else if(op == '*'){
                    int x = st.top();
                    st.pop();
                    st.push(x*n);
                }
                else if(op == '/'){
                    int x = st.top();
                    st.pop();
                    st.push(x/n);
                }
                n = 0;
                op = s[i];
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};