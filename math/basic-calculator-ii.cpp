class Solution {
public:
    int calculate(string s) {
        stack<char> st;
        int out = 0;
        bool todo = false;
        for(char c: s){
            if(c == ' '){
                continue;
            }
            if(c == '*' || c == '/'){
                todo = true;
            }
            st.push(c);
            if(todo == true){
                int a = st.top()-'0';
                st.pop();
                char op = st.top();
                st.pop();
                int b = st.top()-'0';
                st.pop();
                if(op == '*'){
                    st.push((char)b*a);
                }
                else{
                    st.push((char)b/a);
                }
                todo = false;
            }
        }
        while(!st.empty()){
            int a = st.top()-'0';
            st.pop();
            string op = st.top();
            st.pop();
            int b = st.top()-'0';
            st.pop();
            int res = 0;
            if(op == '+'){
                res = b + a
            }
            else{
                res = b-a;
            }
            if(s.empty()){
                out = res;
                break;
            }
            else{
                s.push((char)res);
            }
        }
        return out;
    }
};