class Solution {
public:
    int calculate(string s) {
        stack<char> st;
        int out = 0;
        bool todo = false;
        for(char c: s){
            if(c == " "){
                continue;
            }
            if(c == "*" || c == "/"){
                todo = true;
            }
            st.push(c);
            if(todo == true){
                int a = stoi(st.top());
                st.pop();
                string op = st.top();
                st.pop();
                int b = stoi(st.top());
                st.pop();
                if(op == "*"){
                    st.push(b*a);
                }
                else{
                    st.push(b/a);
                }
                todo = false;
            }
        }
        while(!st.empty()){
            int a = stoi(st.top());
            st.pop();
            string op = st.top();
            st.pop();
            int b = stoi(st.top());
            st.pop();
            int res = 0;
            if(op == "+"){
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
                s.push(res);
            }
        }
        return out;
    }
};